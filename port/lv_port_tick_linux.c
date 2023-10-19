#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include "../lvgl/lvgl.h"

#include "lv_port_tick.h"

static pthread_t tick_tid;

static void *tick_thread(void *data)
{
    for (;;) {
        usleep(5000);
        lv_tick_inc(5);
    }

    return NULL;
}

void lv_port_tick_init()
{
    printf("Creating sys_tick ...\n");
    pthread_create(&tick_tid, NULL, tick_thread, NULL);
}
