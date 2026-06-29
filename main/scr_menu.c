#include "scr_menu.h"
#include <pocketbyte.h>
#include "theme.h"

#define DB_URL "https://raw.githubusercontent.com/PocketByteTechnology/apps/main/"
#define APPS_URL DB_URL"/apps"
#define CATALOG_JSON_URL DB_URL"catalog.json"

#define PAGE_SIZE 16

typedef struct {
    char id[64];
    char title[64];
    char desc[64];
    char genre[32];
    char version[16];
    char author[32];
    char date[16];
    // char image_path[64];
} app_entry_t;

static app_entry_t entries[PAGE_SIZE];
static int entry_count = 0;
static int selected_idx = 0;
static int page_num = 0;
static lv_obj_t *menu_scr = NULL;
static lv_obj_t *list = NULL;
static lv_obj_t *list_btns[PAGE_SIZE];
static lv_obj_t *page_label;

static void highlight_item(int idx)
{
    for (size_t i = 0; i < entry_count; ++i) {
        lv_obj_set_style_text_color(list_btns[i], lv_color_hex(FG1), LV_PART_MAIN);
    }
    if (idx >= 0 && idx < entry_count) {
        lv_obj_set_style_text_color(list_btns[idx], lv_color_hex(FG0), LV_PART_MAIN);
        lv_obj_scroll_to_view(list_btns[idx], LV_ANIM_OFF);
    }
}

static void rebuild_list(void)
{
    lv_obj_clean(list);

    selected_idx = 0;
    for (size_t i = 0; i < entry_count; ++i) {
        list_btns[i] = lv_list_add_button(list, NULL, entries[(page_num * PAGE_SIZE) + i].title);
        lv_obj_set_style_bg_color(list_btns[i], lv_color_hex(BG0), LV_PART_MAIN);
        lv_obj_set_style_border_width(list_btns[i], 0, LV_PART_MAIN);
        lv_obj_set_style_pad_ver(list_btns[i], 4, LV_PART_MAIN);
        lv_obj_set_style_text_font(list_btns[i], &inter_14, LV_PART_MAIN);
        lv_label_set_long_mode(lv_obj_get_child(list_btns[i], 0), LV_LABEL_LONG_MODE_WRAP);
    }

    highlight_item(0);
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
    lv_obj_align(page_label, LV_ALIGN_TOP_RIGHT, -4, -4);

    app_entry_t *app1 = malloc(sizeof(app_entry_t));
    lv_strcpy(app1->title, "App 1");
    app_entry_t *app2 = malloc(sizeof(app_entry_t));
    lv_strcpy(app2->title, "App 2");
    app_entry_t *app3 = malloc(sizeof(app_entry_t));
    lv_strcpy(app3->title, "App 3");
    app_entry_t *app4 = malloc(sizeof(app_entry_t));
    lv_strcpy(app4->title, "App 4");
    entries[0] = *app1;
    entries[1] = *app2;
    entries[2] = *app3;
    entries[3] = *app4;
    entry_count = 4;
    rebuild_list();
    free(app1);
    free(app2);
    free(app3);
    free(app4);

    return menu_scr;
}

void scr_menu_nav_up(void)
{
    if (entry_count == 0)
        return;

    selected_idx = (selected_idx - 1 + entry_count) % entry_count;
    highlight_item(selected_idx);
}

void scr_menu_nav_down(void)
{
    if (entry_count == 0)
        return;

    selected_idx = (selected_idx + 1) % entry_count;
    highlight_item(selected_idx);
}
