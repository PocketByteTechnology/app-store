#pragma once

#include <lvgl.h>

#ifdef __cplusplus
extern "C" {
#endif

lv_obj_t *scr_menu_create(void);
const char *scr_menu_get_selected_id(void);
void scr_menu_nav_up(void);
void scr_menu_nav_down(void);
void scr_menu_nav_left(void);
void scr_menu_nav_right(void);

#ifdef __cplusplus
}
#endif
