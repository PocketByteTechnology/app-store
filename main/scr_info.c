#include "scr_info.h"
#include <memory.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
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
    lv_snprintf(get_url, sizeof(get_url), APPS_URL"%s/info.json", id);
    download_ctx_t info_ctx = {
        .buf = NULL,
        .size = 0,
    };
    wifi_https_get_request(&info_ctx, get_url);

    cJSON *root = cJSON_Parse(info_ctx.buf);
    free(info_ctx.buf); // Downloaded buffer is no longer needed since the content of the JSON resides in root. Best to just free this immediately.
    if (root == NULL) {
        const char *error = cJSON_GetErrorPtr();
        if (error != NULL) {
            ESP_LOGE("scr_menu", "cJSON error: %s", error);
        }
        cJSON_Delete(root);
    }

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
    cJSON *binary = cJSON_GetObjectItem(root, "binary");
    if (cJSON_IsString(binary) && binary->valuestring != NULL) {
        lv_strcpy(entry.binary, binary->valuestring);
    }
}

static void create_img_dsc()
{
    char get_url[128];
    lv_snprintf(get_url, sizeof(get_url), APPS_URL"%s/%s", entry.id, entry.image);

    download_ctx_t image_ctx = { .buf = NULL, .size = 0 };
    wifi_https_get_request(&image_ctx, get_url);

    if (!image_ctx.buf || image_ctx.size <= 12) {
        goto end;
    }

    size_t pixel_data_size = image_ctx.size - 12;

    entry.img_dsc = heap_caps_malloc(sizeof(lv_image_dsc_t), MALLOC_CAP_SPIRAM); 
    if (!entry.img_dsc) goto end;
    memset(entry.img_dsc, 0, sizeof(*entry.img_dsc));

    uint8_t *pixel_buf = heap_caps_malloc(pixel_data_size, MALLOC_CAP_SPIRAM);
    if (!pixel_buf) {
        free(entry.img_dsc);
        entry.img_dsc = NULL;
        goto end;
    }
    
    memcpy(pixel_buf, image_ctx.buf + 12, pixel_data_size);

    entry.img_dsc->header.magic = LV_IMAGE_HEADER_MAGIC;
    entry.img_dsc->header.cf = LV_COLOR_FORMAT_RGB565;
    entry.img_dsc->header.w = 64;
    entry.img_dsc->header.h = 64;
    entry.img_dsc->header.stride = 64 * 2;
    entry.img_dsc->data_size = pixel_data_size;
    entry.img_dsc->data = pixel_buf;

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

    lv_obj_t *actions_cont = lv_obj_create(cont);
    lv_obj_set_grid_cell(actions_cont, LV_GRID_ALIGN_CENTER, 0, 2,
                         LV_GRID_ALIGN_CENTER, 1, 1);
    lv_obj_set_style_pad_all(actions_cont, 0, LV_PART_MAIN);
    lv_obj_set_style_border_width(actions_cont, 0, LV_PART_MAIN);
    lv_obj_set_size(actions_cont, 128, LV_SIZE_CONTENT);
    lv_obj_set_style_bg_color(actions_cont, lv_color_hex(BG0), LV_PART_MAIN);

    lv_obj_t *launch_label = lv_label_create(actions_cont);
    lv_label_set_text(launch_label, "A: Install");
    lv_obj_set_style_text_font(launch_label, &inter_12, LV_PART_MAIN);
    lv_obj_set_style_text_color(launch_label, lv_color_hex(BG0), LV_PART_MAIN);
    lv_obj_set_style_bg_opa(launch_label, LV_OPA_COVER, LV_PART_MAIN);
    lv_obj_set_style_bg_color(launch_label, lv_color_hex(FG0), LV_PART_MAIN);
    lv_obj_set_style_radius(launch_label, LV_RADIUS_CIRCLE, LV_PART_MAIN);
    lv_obj_set_style_pad_hor(launch_label, 8, LV_PART_MAIN);
    lv_obj_set_style_pad_ver(launch_label, 4, LV_PART_MAIN);
    lv_obj_set_align(launch_label, LV_ALIGN_LEFT_MID);

    lv_obj_t *back_label = lv_label_create(actions_cont);
    lv_label_set_text(back_label, "B: Back");
    lv_obj_set_style_text_font(back_label, &inter_12, LV_PART_MAIN);
    lv_obj_set_style_text_color(back_label, lv_color_hex(FG0), LV_PART_MAIN);
    lv_obj_set_align(back_label, LV_ALIGN_RIGHT_MID);

    return info_scr;
}

static void clear_entry(void)
{
    lv_memset(entry.author, 0, sizeof(entry.author));
    lv_memset(entry.binary, 0, sizeof(entry.binary));
    lv_memset(entry.date, 0, sizeof(entry.date));
    lv_memset(entry.desc, 0, sizeof(entry.desc));
    lv_memset(entry.genre, 0, sizeof(entry.genre));
    lv_memset(entry.id, 0, sizeof(entry.id));
    lv_memset(entry.image, 0, sizeof(entry.image));
    lv_memset(entry.version, 0, sizeof(entry.version));
}

void scr_info_destroy(void)
{
    if (info_scr) {
        clear_entry();
        lv_obj_delete(info_scr);
        info_scr = NULL;
        
        if (entry.img_dsc) {
            if (entry.img_dsc->data) {
                free((void *)entry.img_dsc->data);
            }
            free(entry.img_dsc);
            entry.img_dsc = NULL;
        }
    }
}

void scr_info_download_app(void)
{
    char download_directory[128];
    char directory[128];

    lv_snprintf(download_directory, sizeof(download_directory), APPS_URL"%s", entry.id);
    lv_snprintf(directory, sizeof(directory), MOUNT_POINT"/apps/%s", entry.id);
    
    mkdir(directory, 0777);

    const char *files_to_download[3] = {
        "info.json",
        entry.image,
        entry.binary
    };

    for (size_t i = 0; i < 3; ++i) {
        char download_file_path[256];
        char file_path[256];
        
        lv_snprintf(download_file_path, sizeof(download_file_path), "%s/%s", download_directory, files_to_download[i]);
        lv_snprintf(file_path, sizeof(file_path), "%s/%s", directory, files_to_download[i]);

        download_ctx_t download_ctx = {
            .buf = NULL,
            .size = 0,
            .file = NULL
        };

        // For binaries and images, open the file first to stream directly to it
        if (i > 0) { 
            download_ctx.file = fopen(file_path, "wb");
            if (download_ctx.file == NULL) {
                ESP_LOGE("scr_info", "Failed to create target file: %s", file_path);
                continue;
            }
        }

        wifi_https_get_request(&download_ctx, download_file_path);

        if (download_ctx.file != NULL) {
            fclose(download_ctx.file);
        } else {
            FILE *file = fopen(file_path, "wb");
            if (file) {
                fwrite(download_ctx.buf, 1, download_ctx.size, file);
                fclose(file);
            }
            free(download_ctx.buf);
        }
    }
}
