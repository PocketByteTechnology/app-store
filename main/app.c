#include "app.h"
#include <esp_log.h>
#include <pocketbyte.h>
#include <gfx_lvgl.h>
#include "scr_menu.h"

static const char *TAG = "app";

typedef enum {
    SCREEN_MENU,
    SCREEN_INFO,
} screen_t;

static screen_t current_screen = SCREEN_MENU;
static lv_obj_t *menu_screen = NULL;

void app_init(void)
{
    pb_sys_handle_pending_reboot();

    pb_gfx_lvgl_init();
    pb_i2c_init();
    pb_gamepad_init();
    pb_sd_init();

    menu_screen = scr_menu_create();
    current_screen = SCREEN_MENU;

    ESP_LOGI(TAG, "App ready");
}

void app_update(void)
{
    pb_gamepad_poll();

    switch (current_screen) {
        case SCREEN_MENU:
            if (pb_gamepad_button_pressed(PB_FUNC)) {
                pb_sys_reboot_to_loader();
            }
            break;
        case SCREEN_INFO:
            break;
    }

    pb_gfx_lvgl_tick();
}
