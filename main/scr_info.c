#include "scr_info.h"
#include <esp_log.h>
#include <cJSON.h>
#include "wifi.h"
#include "theme.h"

static lv_obj_t *info_scr = NULL;
static app_entry_t entry;

static void parse_info_json(const char *id)
{
    char get_url[128];
    lv_snprintf(get_url, sizeof(get_url) * sizeof(char), APPS_URL"%s/info.json", id);
    download_ctx_t info_ctx = {
        .buf = NULL,
        .size = 0,
    };
    wifi_https_get_request(&info_ctx, get_url);

    cJSON *root = cJSON_Parse(info_ctx.buf);
    if (root == NULL) {
        const char *error = cJSON_GetErrorPtr();
        if (error != NULL) {
            ESP_LOGE("scr_menu", "cJSON error: %s", error);
        }
        goto end;
    }

    free(info_ctx.buf); // Downloaded buffer is no longer needed since the content of the JSON resides in root. Best to just free this immediately.

    lv_strcpy(entry.id, id);

    cJSON *title = cJSON_GetObjectItem(root, "title");
    if (cJSON_IsString(title) && title->valuestring != NULL) {
        lv_strcpy(entry.title, title->valuestring);
    }
    cJSON *desc = cJSON_GetObjectItem(root, "description");
    if (cJSON_IsString(desc) && desc->valuestring != NULL) {
        lv_strcpy(entry.desc, desc->valuestring);
    }
    cJSON *genre = cJSON_GetObjectItem(root, "genre");
    if (cJSON_IsString(genre) && genre->valuestring != NULL) {
        lv_strcpy(entry.genre, genre->valuestring);
    }
    cJSON *version = cJSON_GetObjectItem(root, "version");
    if (cJSON_IsString(version) && version->valuestring != NULL) {
        lv_strcpy(entry.version, version->valuestring);
    }
    cJSON *author = cJSON_GetObjectItem(root, "author");
    if (cJSON_IsString(author) && author->valuestring != NULL) {
        lv_strcpy(entry.author, author->valuestring);
    }
    cJSON *date = cJSON_GetObjectItem(root, "date");
    if (cJSON_IsString(date) && date->valuestring != NULL) {
        lv_strcpy(entry.date, date->valuestring);
    }
    cJSON *image = cJSON_GetObjectItem(root, "image");
    if (cJSON_IsString(image) && image->valuestring != NULL) {
        lv_strcpy(entry.image, image->valuestring);
    }

end:
    cJSON_Delete(root);
}

lv_obj_t *scr_info_create(const char *id)
{
    scr_info_destroy();

    info_scr = lv_obj_create(NULL);
    lv_obj_set_style_bg_color(info_scr, lv_color_hex(BG0), LV_PART_MAIN);

    parse_info_json(id);
    ESP_LOGI("scr_info", "%s, %s, %s, %s, %s, %s, %s", entry.title, entry.desc, entry.genre, entry.version, entry.author, entry.date, entry.image);

    return info_scr;
}

static void clear_entry(void)
{
    lv_memset(entry.author, 0, sizeof(entry.author) * sizeof(char));
    lv_memset(entry.date, 0, sizeof(entry.date) * sizeof(char));
    lv_memset(entry.desc, 0, sizeof(entry.desc) * sizeof(char));
    lv_memset(entry.genre, 0, sizeof(entry.genre) * sizeof(char));
    lv_memset(entry.id, 0, sizeof(entry.id) * sizeof(char));
    lv_memset(entry.image, 0, sizeof(entry.image) * sizeof(char));
    lv_memset(entry.version, 0, sizeof(entry.version) * sizeof(char));
}

void scr_info_destroy(void)
{
    if (info_scr) {
        clear_entry();
        lv_obj_delete(info_scr);
        info_scr = NULL;
    }
}
