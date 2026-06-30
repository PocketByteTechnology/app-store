#pragma once

#include <lvgl.h>

#ifdef __cplusplus
extern "C" {
#endif

lv_obj_t *scr_menu_create(void);
void scr_menu_nav_up(void);
void scr_menu_nav_down(void);

#ifdef __cplusplus
}
#endif
