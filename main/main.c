#include <pocketbyte.h>
#include "app.h"

void app_main(void)
{
    app_init();

    while (pb_timing_loop(60)) {
        app_update();
    }
}
