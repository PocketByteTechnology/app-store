#pragma once

#include <lvgl.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    char id[64];
    char title[64];
    char desc[64];
    char genre[20];
    char version[8];
    char author[32];
    char date[12];
    char image_path[64];
} app_entry_t;

lv_obj_t *scr_info_create(void);

#ifdef __cplusplus
}
#endif
