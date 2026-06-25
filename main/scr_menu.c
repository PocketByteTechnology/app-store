#include "scr_menu.h"
#include <pocketbyte.h>
#include "theme.h"

static lv_obj_t *menu_scr = NULL;
static lv_obj_t *list = NULL;

lv_obj_t *scr_menu_create(void)
{
    menu_scr = lv_scr_act();
    lv_obj_clean(menu_scr);
    lv_obj_set_style_bg_color(menu_scr, lv_color_hex(BG0), LV_PART_MAIN);

    list = lv_list_create(menu_scr);
    lv_obj_set_size(list, LCD_WIDTH, LCD_HEIGHT);
    lv_obj_set_pos(list, 0, 0);
    lv_obj_set_scrollbar_mode(list, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(list, lv_color_hex(BG0), LV_PART_MAIN);
    lv_obj_set_style_border_width(list, 0, 0);
    lv_obj_set_style_pad_all(list, 0, 0);

    return menu_scr;
}
