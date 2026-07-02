#include "scr_menu.h"
#include <pocketbyte.h>
#include <cJSON.h>
#include "wifi.h"
#include "theme.h"

#define PAGE_SIZE 16

static size_t app_count = 0;
static const char **app_list;
static int selected_idx = 0;
static int page_num = 0;
static lv_obj_t *menu_scr = NULL;
static lv_obj_t *list = NULL;
static lv_obj_t *list_btns[PAGE_SIZE];
static lv_obj_t *page_label;
static lv_obj_t *status_label;

static void parse_catalog_json()
{
    download_ctx_t catalog_ctx = {
        .buf = NULL,
        .size = 0,
    };
    wifi_https_get_request(&catalog_ctx, CATALOG_JSON_URL);
    if (catalog_ctx.buf == NULL) {
        ESP_LOGE("scr_menu", "Failed to download catalog JSON");
        return;
    }

    cJSON *root = cJSON_Parse(catalog_ctx.buf);
    free(catalog_ctx.buf); // Downloaded buffer is no longer needed since the content of the JSON resides in root. Best to just free this immediately.
    if (root == NULL) {
        const char *error = cJSON_GetErrorPtr();
        if (error != NULL) {
            ESP_LOGE("scr_menu", "cJSON error: %s", error);
        }
        cJSON_Delete(root);
    }

    const cJSON *count = cJSON_GetObjectItem(root, "count");
    if (cJSON_IsNumber(count)) {
        app_count = count->valueint;

        app_list = malloc(app_count * sizeof(char *));
    }

    const cJSON *apps = cJSON_GetObjectItem(root, "apps");
    if (cJSON_IsArray(apps)) {
        cJSON *id = NULL;
        size_t list_index = 0;
        cJSON_ArrayForEach(id, apps) {
            if (cJSON_IsString(id) && id->valuestring != NULL) {
                app_list[list_index] = malloc((strlen(id->valuestring) + 1) * sizeof(char)); // +1 for the null terminator
                lv_strcpy(app_list[list_index], id->valuestring);
                ++list_index;
            }
        }
    }
}

static void highlight_item(int idx)
{
    for (size_t i = 0; i < app_count; ++i) {
        lv_obj_set_style_text_color(list_btns[i], lv_color_hex(FG1), LV_PART_MAIN);
    }
    if (idx >= 0 && idx < app_count) {
        lv_obj_set_style_text_color(list_btns[idx], lv_color_hex(FG0), LV_PART_MAIN);
        lv_obj_scroll_to_view(list_btns[idx], LV_ANIM_OFF);
    }
}

static void update_wifi_status(void)
{
    const char *text = wifi_is_connected() ? "Wi-Fi Connected" : "Wi-Fi Not Connected";
    lv_label_set_text(status_label, text);
    lv_obj_update_layout(status_label);
    lv_obj_align_to(status_label, page_label, LV_ALIGN_OUT_LEFT_MID, -8, 0);
}

static void rebuild_list(void)
{
    lv_obj_clean(list);

    selected_idx = 0;
    for (size_t i = 0; i < app_count; ++i) {
        list_btns[i] = lv_list_add_button(list, NULL, app_list[(page_num * PAGE_SIZE) + i]);
        lv_obj_set_style_bg_color(list_btns[i], lv_color_hex(BG0), LV_PART_MAIN);
        lv_obj_set_style_border_width(list_btns[i], 0, LV_PART_MAIN);
        lv_obj_set_style_pad_ver(list_btns[i], 4, LV_PART_MAIN);
        lv_obj_set_style_text_font(list_btns[i], &inter_14, LV_PART_MAIN);
        lv_label_set_long_mode(lv_obj_get_child(list_btns[i], 0), LV_LABEL_LONG_MODE_WRAP);
    }

    highlight_item(0);

    update_wifi_status();
}

lv_obj_t *scr_menu_create(void)
{
    menu_scr = lv_scr_act();
    lv_obj_clean(menu_scr);
    lv_obj_set_style_bg_color(menu_scr, lv_color_hex(BG0), LV_PART_MAIN);

    list = lv_list_create(menu_scr);
    lv_obj_set_size(list, LCD_WIDTH, LCD_HEIGHT - 16);
    lv_obj_set_pos(list, 0, 16);
    lv_obj_set_scrollbar_mode(list, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(list, lv_color_hex(BG0), LV_PART_MAIN);
    lv_obj_set_style_border_width(list, 0, LV_PART_MAIN);
    lv_obj_set_style_pad_all(list, 0, LV_PART_MAIN);

    page_label = lv_label_create(menu_scr);
    lv_label_set_text_fmt(page_label, "Page: %d", page_num + 1);
    lv_obj_set_style_text_font(page_label, &inter_12, LV_PART_MAIN);
    lv_obj_set_style_text_color(page_label, lv_color_hex(FG1), LV_PART_MAIN);
    lv_obj_align(page_label, LV_ALIGN_TOP_RIGHT, -4, -4);

    status_label = lv_label_create(menu_scr);
    lv_label_set_text(status_label, "---");
    lv_obj_set_style_text_font(status_label, &inter_12, LV_PART_MAIN);
    lv_obj_set_style_text_color(status_label, lv_color_hex(FG1), LV_PART_MAIN);
    lv_obj_align_to(status_label, page_label, LV_ALIGN_OUT_LEFT_MID, -8, 0);

    parse_catalog_json();
    rebuild_list();

    return menu_scr;
}

const char *scr_menu_get_selected_id(void)
{
    return app_list[selected_idx];
}

void scr_menu_nav_up(void)
{
    if (app_count == 0)
        return;

    selected_idx = (selected_idx - 1 + app_count) % app_count;
    highlight_item(selected_idx);
}

void scr_menu_nav_down(void)
{
    if (app_count == 0)
        return;

    selected_idx = (selected_idx + 1) % app_count;
    highlight_item(selected_idx);
}

void scr_menu_nav_left(void)
{
    if (app_count == 0)
        return;
}

void scr_menu_nav_right(void)
{
    if (app_count == 0)
        return;
}
