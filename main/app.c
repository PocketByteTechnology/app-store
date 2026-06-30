#include "app.h"
#include <esp_log.h>
#include <pocketbyte.h>
#include <gfx_lvgl.h>
#include "wifi.h"
#include "scr_menu.h"
#include "scr_info.h"

typedef enum {
    SCREEN_MENU,
    SCREEN_INFO,
} screen_t;

static screen_t current_screen = SCREEN_MENU;
static lv_obj_t *menu_scr = NULL;

void app_init(void)
{
    pb_sys_handle_pending_reboot();

    pb_gfx_lvgl_init();
    pb_i2c_init();
    pb_gamepad_init();
    pb_sd_init();
    pb_nvs_init(); // Wi-Fi needs NVS to be initialized

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
            break;
    }

    pb_gfx_lvgl_tick();
}
