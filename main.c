#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <signal.h>
#include <pthread.h>

#include "lvgl/lvgl.h"
#include "port/lv_port_disp.h"
#include "port/lv_port_indev.h"
#include "port/lv_port_tick.h"

#include "lvgl/demos/lv_demos.h"
#include "lvgl/examples/lv_examples.h"

#include "linux/init.h"
#include "ui/ui.h"

/*******************
*       DEFINE
********************/
static void app_init(void);
static void app_exit(void);

static pthread_mutex_t lvgl_mutex = PTHREAD_MUTEX_INITIALIZER;
static pthread_t lvgl_tid;
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

static void *lvgl_thread(void *id)
{
    for(;;) {
        pthread_mutex_lock(&lvgl_mutex);
        lv_timer_handler();
        pthread_mutex_unlock(&lvgl_mutex);
        usleep(5000);
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
    pthread_create(&lvgl_tid, NULL, lvgl_thread, NULL);

    /* Booting up logic */
    pthread_mutex_lock(&lvgl_mutex);
    lv_obj_t * lottie = lv_rlottie_create_from_file(lv_scr_act(), 100, 100,
                                                    "./first_up.json");
    pthread_mutex_unlock(&lvgl_mutex);

    lv_rlottie_set_play_mode(lottie, LV_RLOTTIE_CTRL_PLAY);
    lv_obj_center(lottie);

    pthread_mutex_lock(&lvgl_mutex);
    lv_obj_t *label = lv_label_create(lv_scr_act());
    lv_obj_set_width(label, lv_disp_get_hor_res(NULL)-8);
    lv_label_set_long_mode(label, LV_LABEL_LONG_WRAP);
    lv_label_set_text(label, "Loading...");
    lv_obj_set_style_text_font(label, &ui_font_Fixedasys16, 0);
    lv_obj_set_style_text_color(label, lv_color_white(), 0);
    lv_obj_set_style_text_align(label, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_align(label, LV_ALIGN_BOTTOM_MID, 0, -10);
    pthread_mutex_unlock(&lvgl_mutex);

    system_initcalls();
    sleep(1);

    /* TODO: replace this with anim */
    pthread_mutex_lock(&lvgl_mutex);
    lv_obj_del(lottie);
    pthread_mutex_unlock(&lvgl_mutex);

    pthread_mutex_lock(&lvgl_mutex);
    ui_init();
    lv_label_set_text(ui_LabelBattery, LV_SYMBOL_BATTERY_FULL);
    lv_label_set_text(ui_LabelWifi, LV_SYMBOL_WIFI);
    lv_label_set_text(ui_LabelGPS, LV_SYMBOL_GPS);
    pthread_mutex_unlock(&lvgl_mutex);

    for(;;);

    return 0;
}
