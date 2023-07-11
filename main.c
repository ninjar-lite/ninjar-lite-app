#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <signal.h>

#include "lvgl/lvgl.h"
#include "port/lv_port_disp.h"
#include "port/lv_port_indev.h"
#include "port/lv_port_tick.h"

#include "lvgl/demos/lv_demos.h"
#include "lvgl/examples/lv_examples.h"

/*******************
*       DEFINE
********************/
static void app_init(void);
static void app_exit(void);

static lv_group_t *g;


static void intr_sig_handler(int signal)
{
    app_exit();
}

static void app_init(void)
{
    system("echo 0 > /sys/class/graphics/fbcon/cursor_blink");

    signal(SIGINT, intr_sig_handler);
}

static void app_exit(void)
{
    printf("app exiting ...");

    system("echo 1 > /sys/class/graphics/fbcon/cursor_blink");

    printf(" done\n");
    exit(EXIT_SUCCESS);
}

static void hal_init(void)
{
    lv_init();

    lv_port_disp_init();
    lv_port_indev_init();
    lv_port_tick_init();

    g = lv_group_get_default();
    if (g == NULL) {
        g = lv_group_create();
        lv_group_set_default(g);
    }

    lv_indev_t *cur_drv = NULL;
    for (;;) {
        cur_drv = lv_indev_get_next(cur_drv);
        if (!cur_drv) {
            break;
        }

        if (cur_drv->driver->type == LV_INDEV_TYPE_KEYPAD) {
            lv_indev_set_group(cur_drv, g);
        }

        if (cur_drv->driver->type == LV_INDEV_TYPE_ENCODER) {
            lv_indev_set_group(cur_drv, g);
        }
    }
}



int main(int argc, char **argv)
{
    app_init();
    hal_init();

    // ifconfig usb0 192.168.200.100
    // ping 192.168.200.101
    // mount -t nfs -o nolock,vers=3 192.168.200.101:/home/developer/nfs_share /mnt
    // cd /mnt && ./demo

    /* App here */
    printf("Launching App ...\n");
    lv_demo_widgets();

    for(;;) {
        lv_timer_handler();
        usleep(5000);
    }

    return 0;
}
