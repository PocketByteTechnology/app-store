#pragma once

#include <lvgl.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    // JSON data
    char id[64];
    char title[64];
    char desc[64];
    char genre[20];
    char version[8];
    char author[32];
    char date[12];
    char image[64];
    char binary[64];

    lv_image_dsc_t *img_dsc;
} app_entry_t;

lv_obj_t *scr_info_create(const char *id);
void scr_info_destroy(void);
void scr_info_download_app(void);

#ifdef __cplusplus
}
#endif
