#include "scr_info.h"
#include <memory.h>
#include <esp_heap_caps.h>
#include <esp_log.h>
#include <pocketbyte.h>
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

static void create_img_dsc()
{
    char get_url[128];
    lv_snprintf(get_url, sizeof(get_url) * sizeof(char), APPS_URL"%s/%s", entry.id, entry.image);

    download_ctx_t image_ctx = {
        .buf = NULL,
        .size = 0,
    };
    wifi_https_get_request(&image_ctx, get_url);

    char *image_buf = image_ctx.buf + 12; // Skip the first 12 bytes because that's just the LVGL image converter header

    // There are some weird memory corruption issues (garbage pixels) when using SRAM, so using PSRAM is a quick fix
    entry.img_dsc = heap_caps_malloc(sizeof(lv_image_dsc_t), MALLOC_CAP_SPIRAM); 
    if (!entry.img_dsc) {
        goto end;
    }

    memset(entry.img_dsc, 0, sizeof(*entry.img_dsc));
    entry.img_dsc->header.magic = LV_IMAGE_HEADER_MAGIC;
    entry.img_dsc->header.cf = LV_COLOR_FORMAT_RGB565;
    entry.img_dsc->header.w = 64;
    entry.img_dsc->header.h = 64;
    entry.img_dsc->header.stride = 64 * 2;
    entry.img_dsc->data_size = 64 * 64 * 2;
    entry.img_dsc->data = (uint8_t *)image_buf;

end:
    free(image_ctx.buf);
}

lv_obj_t *scr_info_create(const char *id)
{
    scr_info_destroy();

    info_scr = lv_obj_create(NULL);
    lv_obj_set_style_bg_color(info_scr, lv_color_hex(BG0), LV_PART_MAIN);

    parse_info_json(id);
    create_img_dsc();

    static lv_coord_t col_dsc[] = {128, 128, LV_GRID_TEMPLATE_LAST};
    static lv_coord_t row_dsc[] = {128, 32, LV_GRID_TEMPLATE_LAST};

    lv_obj_t *cont = lv_obj_create(info_scr);
    lv_obj_set_size(cont, LCD_WIDTH - (24 * 2), LCD_HEIGHT - 16);
    lv_obj_align(cont, LV_ALIGN_CENTER, 0, 16 / 2);
    lv_obj_set_style_bg_color(cont, lv_color_hex(BG0), LV_PART_MAIN);
    lv_obj_set_layout(cont, LV_LAYOUT_GRID);
    lv_obj_set_grid_align(cont, LV_GRID_ALIGN_CENTER, LV_GRID_ALIGN_CENTER);
    lv_obj_set_style_grid_column_dsc_array(cont, col_dsc, LV_PART_MAIN);
    lv_obj_set_style_grid_row_dsc_array(cont, row_dsc, LV_PART_MAIN);
    lv_obj_set_style_pad_column(cont, 15, LV_PART_MAIN);
    lv_obj_set_style_pad_row(cont, 20, LV_PART_MAIN);
    lv_obj_set_style_border_width(cont, 0, LV_PART_MAIN);
    lv_obj_set_scrollbar_mode(cont, LV_SCROLLBAR_MODE_OFF);

    lv_obj_t *image_cont = lv_obj_create(cont);
    lv_obj_set_size(image_cont, 128, 128);
    lv_obj_set_style_pad_all(image_cont, 0, LV_PART_MAIN);
    lv_obj_set_style_border_width(image_cont, 0, LV_PART_MAIN);
    lv_obj_set_style_radius(image_cont, 8, LV_PART_MAIN);
    lv_obj_set_style_clip_corner(image_cont, true, LV_PART_MAIN);
    lv_obj_set_grid_cell(image_cont, LV_GRID_ALIGN_CENTER, 0, 1,
                         LV_GRID_ALIGN_CENTER, 0, 1);

    lv_obj_t *image = lv_image_create(image_cont);
    lv_image_set_src(image, entry.img_dsc);
    lv_image_set_scale(image, LV_SCALE_NONE * 2);
    lv_image_set_antialias(image, false);
    lv_obj_set_align(image, LV_ALIGN_CENTER);

    lv_obj_t *info_cont = lv_obj_create(cont);
    lv_obj_set_grid_cell(info_cont, LV_GRID_ALIGN_CENTER, 1, 1,
                         LV_GRID_ALIGN_CENTER, 0, 1);
    lv_obj_set_style_pad_all(info_cont, 0, LV_PART_MAIN);
    lv_obj_set_style_border_width(info_cont, 0, LV_PART_MAIN);
    lv_obj_set_style_bg_color(info_cont, lv_color_hex(BG0), LV_PART_MAIN);

    lv_obj_t *title_label = lv_label_create(info_cont);
    lv_label_set_text(title_label, entry.title);
    lv_label_set_long_mode(title_label, LV_LABEL_LONG_MODE_WRAP);
    lv_obj_set_style_text_font(title_label, &inter_14, LV_PART_MAIN);
    lv_obj_set_style_text_color(title_label, lv_color_hex(FG0), LV_PART_MAIN);
    lv_obj_set_width(title_label, 128);
    lv_obj_align(title_label, LV_ALIGN_TOP_LEFT, 0, 0);

    lv_obj_t *meta_label = lv_label_create(info_cont);
    lv_label_set_text_fmt(meta_label, "%s  \xe2\x80\xa2  %s  \xe2\x80\xa2  %s  \xe2\x80\xa2  %s",
                          entry.author, entry.genre, entry.version, entry.date);
    lv_label_set_long_mode(meta_label, LV_LABEL_LONG_MODE_WRAP);
    lv_obj_set_style_text_font(meta_label, &inter_10, LV_PART_MAIN);
    lv_obj_set_style_text_color(meta_label, lv_color_hex(FG1), LV_PART_MAIN);
    lv_obj_set_width(meta_label, 128);
    lv_obj_align(meta_label, LV_ALIGN_TOP_LEFT, 0, 20);

    lv_obj_t *desc_label = lv_label_create(info_cont);
    lv_label_set_text(desc_label, entry.desc);
    lv_label_set_long_mode(desc_label, LV_LABEL_LONG_MODE_WRAP);
    lv_obj_set_style_text_font(desc_label, &inter_10, LV_PART_MAIN);
    lv_obj_set_style_text_color(desc_label, lv_color_hex(FG0), LV_PART_MAIN);
    lv_obj_set_width(desc_label, 128);
    lv_obj_align(desc_label, LV_ALIGN_TOP_LEFT, 0, 60);

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
        free(entry.img_dsc);
    }
}
