#include "wifi.h"
#include <string.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include <freertos/event_groups.h>
#include <esp_log.h>
#include <esp_system.h>
#include <esp_wifi.h>
#include "esp_http_client.h"
#include <esp_crt_bundle.h>
#include <pocketbyte.h>
#include <cJSON.h>

#define EXAMPLE_ESP_MAXIMUM_RETRY  CONFIG_ESP_MAXIMUM_RETRY

#if CONFIG_ESP_STATION_EXAMPLE_WPA3_SAE_PWE_HUNT_AND_PECK
#define ESP_WIFI_SAE_MODE WPA3_SAE_PWE_HUNT_AND_PECK
#define EXAMPLE_H2E_IDENTIFIER ""
#elif CONFIG_ESP_STATION_EXAMPLE_WPA3_SAE_PWE_HASH_TO_ELEMENT
#define ESP_WIFI_SAE_MODE WPA3_SAE_PWE_HASH_TO_ELEMENT
#define EXAMPLE_H2E_IDENTIFIER CONFIG_ESP_WIFI_PW_ID
#elif CONFIG_ESP_STATION_EXAMPLE_WPA3_SAE_PWE_BOTH
#define ESP_WIFI_SAE_MODE WPA3_SAE_PWE_BOTH
#define EXAMPLE_H2E_IDENTIFIER CONFIG_ESP_WIFI_PW_ID
#endif
#if CONFIG_ESP_WIFI_AUTH_OPEN
#define ESP_WIFI_SCAN_AUTH_MODE_THRESHOLD WIFI_AUTH_OPEN
#elif CONFIG_ESP_WIFI_AUTH_WEP
#define ESP_WIFI_SCAN_AUTH_MODE_THRESHOLD WIFI_AUTH_WEP
#elif CONFIG_ESP_WIFI_AUTH_WPA_PSK
#define ESP_WIFI_SCAN_AUTH_MODE_THRESHOLD WIFI_AUTH_WPA_PSK
#elif CONFIG_ESP_WIFI_AUTH_WPA2_PSK
#define ESP_WIFI_SCAN_AUTH_MODE_THRESHOLD WIFI_AUTH_WPA2_PSK
#elif CONFIG_ESP_WIFI_AUTH_WPA_WPA2_PSK
#define ESP_WIFI_SCAN_AUTH_MODE_THRESHOLD WIFI_AUTH_WPA_WPA2_PSK
#elif CONFIG_ESP_WIFI_AUTH_WPA3_PSK
#define ESP_WIFI_SCAN_AUTH_MODE_THRESHOLD WIFI_AUTH_WPA3_PSK
#elif CONFIG_ESP_WIFI_AUTH_WPA2_WPA3_PSK
#define ESP_WIFI_SCAN_AUTH_MODE_THRESHOLD WIFI_AUTH_WPA2_WPA3_PSK
#elif CONFIG_ESP_WIFI_AUTH_WAPI_PSK
#define ESP_WIFI_SCAN_AUTH_MODE_THRESHOLD WIFI_AUTH_WAPI_PSK
#endif

#define WIFI_CONNECTED_BIT BIT0
#define WIFI_FAIL_BIT BIT1

static const char *TAG = "WIFI";
static char wifi_ssid[128];
static char wifi_pass[128];
static EventGroupHandle_t wifi_event_group;
static int num_retries;
static bool isConnected;

static void wifi_event_handler(void *arg, esp_event_base_t event_base, int32_t event_id, void *event_data)
{
    if (event_base == WIFI_EVENT && event_id == WIFI_EVENT_STA_START) {
        esp_wifi_connect();
    } else if (event_base == WIFI_EVENT && event_id == WIFI_EVENT_STA_DISCONNECTED) {
        if (num_retries < EXAMPLE_ESP_MAXIMUM_RETRY) {
            esp_wifi_connect();
            ++num_retries;
            ESP_LOGI(TAG, "Retrying to connect to the access point");
        } else {
            xEventGroupSetBits(wifi_event_group, WIFI_FAIL_BIT);
        }
        ESP_LOGI(TAG, "Failed to connect to the access point");
        isConnected = false;
    } else if (event_base == IP_EVENT && event_id == IP_EVENT_STA_GOT_IP) {
        ip_event_got_ip_t *event = (ip_event_got_ip_t *)event_data;
        ESP_LOGI(TAG, "Got IP: " IPSTR, IP2STR(&event->ip_info.ip));
        num_retries = 0;
        xEventGroupSetBits(wifi_event_group, WIFI_CONNECTED_BIT);
        isConnected = true;
    }
}

static void parse_wifi_json()
{
    FILE *file = fopen(MOUNT_POINT"/wifi.json", "r");
    if (file == NULL) {
        ESP_LOGE(TAG, "Failed to open wifi.json");
        return;
    }

    fseek(file, 0, SEEK_END);
    long size = ftell(file);
    fseek(file, 0, SEEK_SET);

    char *buf = malloc(size + 1); // +1 for the null terminator
    if (buf == NULL) {
        ESP_LOGE(TAG, "Failed to allocate buffer for wifi.json");
        fclose(file);
        return;
    }

    size_t read_bytes = fread(buf, sizeof(char), size, file);
    buf[read_bytes] = '\0';
    fclose(file);

    cJSON *root = cJSON_Parse(buf);
    free(buf);
    if (root == NULL) {
        const char *error = cJSON_GetErrorPtr();
        if (error != NULL) {
            ESP_LOGE(TAG, "cJSON error: %s", error);
        }
        goto end;
    }

    cJSON *ssid = cJSON_GetObjectItem(root, "ssid");
    if (cJSON_IsString(ssid) && ssid->valuestring != NULL) {
        strcpy(wifi_ssid, ssid->valuestring);
    }
    cJSON *pass = cJSON_GetObjectItem(root, "password");
    if (cJSON_IsString(pass) && pass->valuestring != NULL) {
        strcpy(wifi_pass, pass->valuestring);
    }

end:
    cJSON_Delete(root);
}

void wifi_init(void)
{
    parse_wifi_json();

    wifi_event_group = xEventGroupCreate();

    ESP_ERROR_CHECK(esp_netif_init());

    ESP_ERROR_CHECK(esp_event_loop_create_default());
    esp_netif_create_default_wifi_sta();

    wifi_init_config_t cfg = WIFI_INIT_CONFIG_DEFAULT();
    ESP_ERROR_CHECK(esp_wifi_init(&cfg));

    esp_event_handler_instance_t instance_any_id;
    esp_event_handler_instance_t instance_got_ip;
    ESP_ERROR_CHECK(esp_event_handler_instance_register(WIFI_EVENT,
                                                        ESP_EVENT_ANY_ID,
                                                        &wifi_event_handler,
                                                        NULL,
                                                        &instance_any_id));
    ESP_ERROR_CHECK(esp_event_handler_instance_register(IP_EVENT,
                                                        IP_EVENT_STA_GOT_IP,
                                                        &wifi_event_handler,
                                                        NULL,
                                                        &instance_got_ip));

    wifi_config_t wifi_config = {
        .sta = {
            .ssid = {},
            .password = {},
            .threshold.authmode = ESP_WIFI_SCAN_AUTH_MODE_THRESHOLD,
            .sae_pwe_h2e = ESP_WIFI_SAE_MODE,
            .sae_h2e_identifier = EXAMPLE_H2E_IDENTIFIER,
        },
    };
    strcpy((char *)wifi_config.sta.ssid, wifi_ssid);
    strcpy((char *)wifi_config.sta.password, wifi_pass);
    ESP_ERROR_CHECK(esp_wifi_set_mode(WIFI_MODE_STA) );
    ESP_ERROR_CHECK(esp_wifi_set_config(WIFI_IF_STA, &wifi_config) );
    ESP_ERROR_CHECK(esp_wifi_start() );

    ESP_LOGI(TAG, "Finished initializing Wi-Fi");

    EventBits_t bits = xEventGroupWaitBits(wifi_event_group,
                                           WIFI_CONNECTED_BIT | WIFI_FAIL_BIT,
                                           pdFALSE,
                                           pdFALSE,
                                           portMAX_DELAY);

    if (bits & WIFI_CONNECTED_BIT) {
        ESP_LOGI(TAG, "Connected to Access Point SSID: %s password: %s", wifi_ssid, wifi_pass);
    } else if (bits & WIFI_FAIL_BIT) {
        ESP_LOGI(TAG, "Failed to connect to SSID: %s, password: %s", wifi_ssid, wifi_pass);
    } else {
        ESP_LOGE(TAG, "Unexpected event");
    }
}

bool wifi_is_connected(void)
{
    return isConnected;
}

static esp_err_t http_event_handler(esp_http_client_event_t *evt) {
    download_ctx_t *ctx = (download_ctx_t *)evt->user_data;

    switch (evt->event_id) {
        case HTTP_EVENT_ON_DATA:
            if (evt->data_len > 0) {
                if (ctx->file != NULL) {
                    size_t written = fwrite(evt->data, sizeof(char), evt->data_len, ctx->file);
                    if (written < evt->data_len) {
                        ESP_LOGE(TAG, "Flash write error. Might be full?");
                        return ESP_FAIL;
                    }
                    ctx->size += written;
                } else {
                    int new_size = ctx->size + evt->data_len;
                    char *new_buf = realloc(ctx->buf, new_size + 1); // +1 for null-terminator
                
                    if (new_buf == NULL) {
                        ESP_LOGE(TAG, "Failed to allocate memory for chunk!");
                        return ESP_FAIL;
                    }
                
                    ctx->buf = new_buf;
                    memcpy(ctx->buf + ctx->size, evt->data, evt->data_len);
                    ctx->size = new_size;
                    ctx->buf[ctx->size] = '\0';
                
                    ESP_LOGI(TAG, "Downloaded chunk size: %d bytes. Total: %d bytes.", evt->data_len, ctx->size);
                }
            }
            break;
            
        case HTTP_EVENT_DISCONNECTED:
            ESP_LOGI(TAG, "Server connection closed. Download stream finished.");
            break;
            
        default:
            break;
    }
    return ESP_OK;
}

void wifi_https_get_request(download_ctx_t *ctx, const char *url) 
{
    esp_http_client_config_t config = {
        .url = url,
        .event_handler = http_event_handler,
        .user_data = ctx,
        .crt_bundle_attach = esp_crt_bundle_attach,
        .transport_type = HTTP_TRANSPORT_OVER_SSL,
    };

    esp_http_client_handle_t client = esp_http_client_init(&config);
    esp_err_t err = esp_http_client_perform(client);

    if (err == ESP_OK) {
        int status = esp_http_client_get_status_code(client);
        if (status >= 200 && status < 300) {
            ESP_LOGI(TAG, "Success! Total downloaded payload: %d bytes", ctx->size);
        } else {
            ESP_LOGE(TAG, "Server returned failure HTTP Status: %d", status);
        }
    } else {
        ESP_LOGE(TAG, "HTTP Request Failed: %s", esp_err_to_name(err));
    }

    esp_http_client_cleanup(client);
}
