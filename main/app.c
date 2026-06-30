#include "app.h"
#include <esp_log.h>
#include <pocketbyte.h>
#include <gfx_lvgl.h>
#include "wifi.h"
#include "scr_menu.h"

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
    pb_nvs_init(); // Wi-Fi needs NVS to be initialized

    wifi_init();

    // download_ctx_t catalog_ctx = {
    //     .buf = NULL,
    //     .size = 0,
    // };
    // wifi_https_get_request(&catalog_ctx, CATALOG_URL);
    // ESP_LOGI("App", "\n%s", catalog_ctx.buf);
    // free(catalog_ctx.buf);

    menu_screen = scr_menu_create();
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
            break;
        case SCREEN_INFO:
            break;
    }

    pb_gfx_lvgl_tick();
}
