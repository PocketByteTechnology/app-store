#include "app.h"
#include <esp_log.h>
#include <pocketbyte.h>
#include <gfx_lvgl.h>
#include "wifi.h"
#include "theme.h"
#include "scr_menu.h"
#include "scr_info.h"

typedef enum {
    SCREEN_MENU,
    SCREEN_INFO,
} screen_t;

static screen_t current_screen = SCREEN_MENU;
static lv_obj_t *menu_scr = NULL;

static void show_loading_screen(void)
{
    lv_obj_t *scr = lv_scr_act();
    lv_obj_set_style_bg_color(scr, lv_color_hex(BG0), LV_PART_MAIN);
    
    lv_obj_t *label = lv_label_create(scr);
    lv_label_set_text(label, "Wi-Fi connecting...");
    lv_obj_set_align(label, LV_ALIGN_CENTER);
    lv_obj_set_style_text_font(label, &inter_14, LV_PART_MAIN);
    lv_obj_set_style_text_color(label, lv_color_hex(FG0), LV_PART_MAIN);
}

void app_init(void)
{
    pb_sys_handle_pending_reboot();

    pb_gfx_lvgl_init();
    pb_i2c_init();
    pb_gamepad_init();
    pb_sd_init();
    pb_nvs_init(); // Wi-Fi needs NVS to be initialized

    show_loading_screen();
    pb_gfx_lvgl_tick();

    wifi_init();

    menu_scr = scr_menu_create();
    current_screen = SCREEN_MENU;
}

void app_update(void)
{
    pb_gamepad_poll();

    switch (current_screen) {
        case SCREEN_MENU:
            if (pb_gamepad_button_pressed(PB_UP)) {
                scr_menu_nav_up();
            } else if (pb_gamepad_button_pressed(PB_DOWN)) {
                scr_menu_nav_down();
            }
            if (pb_gamepad_button_pressed(PB_FUNC)) {
                pb_sys_reboot_to_loader();
            }
            if (pb_gamepad_button_pressed(PB_A)) {
                lv_obj_t *info_scr = scr_info_create(scr_menu_get_selected_id());
                lv_screen_load(info_scr);
                current_screen = SCREEN_INFO;
            }
            break;
        case SCREEN_INFO:
            if (pb_gamepad_button_pressed(PB_B)) {
                scr_info_destroy();
                lv_screen_load(menu_scr);
                current_screen = SCREEN_MENU;
            }
            if (pb_gamepad_button_pressed(PB_A)) {
                scr_info_download_app();
            }
            if (pb_gamepad_button_pressed(PB_UP)) {
                // Consume event
            } else if (pb_gamepad_button_pressed(PB_DOWN)) {
                // Consume event
            }
            break;
    }

    pb_gfx_lvgl_tick();
}
