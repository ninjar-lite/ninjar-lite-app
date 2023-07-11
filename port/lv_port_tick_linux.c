#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include "../lvgl/lvgl.h"

#include "lv_port_tick.h"

static pthread_t tid;
static pthread_mutex_t g_lvgl_tick_mutex = PTHREAD_MUTEX_INITIALIZER;

static void *tick_thread(void *data)
{
    for (;;) {
        pthread_mutex_lock(&g_lvgl_tick_mutex);
        usleep(5000);
        lv_tick_inc(5000);
        pthread_mutex_unlock(&g_lvgl_tick_mutex);
    }

    return NULL;
}

void lv_port_tick_init()
{
    printf("Creating sys_tick ...\n");
    pthread_create(&tid, NULL, tick_thread, NULL);
}