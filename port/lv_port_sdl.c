/**
 * @file lv_port_sdl.c
 *
 */

/*Copy this file as "lv_port_disp.c" and set this value to "1" to enable content*/
#if 1

/*********************
 *      INCLUDES
 *********************/
#include "lv_port_disp.h"
#include "lv_port_indev.h"
#include "lv_port_tick.h"
#include <stdbool.h>

#define SDL_MAIN_HANDLED /*To fix SDL's "undefined reference to WinMain" issue*/
#include <SDL2/SDL.h>

#include "../lv_drivers/sdl/sdl.h"
#include "../lv_drivers/indev/mouse.h"
#include "../lv_drivers/indev/keyboard.h"
#include "../lv_drivers/indev/mousewheel.h"


/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/
static void disp_init(void);

static void disp_flush(lv_disp_drv_t *disp_drv, const lv_area_t *area,
                       lv_color_t *color_p);
//static void gpu_fill(lv_disp_drv_t * disp_drv, lv_color_t * dest_buf, lv_coord_t dest_width,
//        const lv_area_t * fill_area, lv_color_t color);

/**********************
 *  STATIC VARIABLES
 **********************/

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void lv_port_disp_init(void)
{
    /*-------------------------
     * Initialize your display
     * -----------------------*/
    disp_init();

    /*-----------------------------
     * Create a buffer for drawing
     *----------------------------*/
    static lv_disp_draw_buf_t disp_buf;
    static lv_color_t buf_1[SDL_HOR_RES * SDL_VER_RES];
    static lv_color_t buf_2[SDL_HOR_RES * SDL_VER_RES];
    lv_disp_draw_buf_init(&disp_buf, buf_1, buf_2, SDL_HOR_RES * SDL_VER_RES);

    static lv_disp_drv_t disp_drv;
    lv_disp_drv_init(&disp_drv);

    disp_drv.draw_buf = &disp_buf;
    disp_drv.flush_cb = sdl_display_flush;
    disp_drv.hor_res = SDL_HOR_RES;
    disp_drv.ver_res = SDL_VER_RES;
    disp_drv.full_refresh = 1;
    disp_drv.antialiasing = 1;

    lv_disp_t *disp = lv_disp_drv_register(&disp_drv);
    (void)disp;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

/*Initialize your display and the required peripherals.*/
static void disp_init(void)
{
    /*You code here*/
    sdl_init();
}

// volatile bool disp_flush_enabled = true;

/* Enable updating the screen (the flushing process) when disp_flush() is called by LVGL
 */
// void disp_enable_update(void)
// {
//     disp_flush_enabled = true;
// }

/* Disable updating the screen (the flushing process) when disp_flush() is called by LVGL
 */
// void disp_disable_update(void)
// {
//     disp_flush_enabled = false;
// }

/*Flush the content of the internal buffer the specific area on the display
 *You can use DMA or any hardware acceleration to do this operation in the background but
 *'lv_disp_flush_ready()' has to be called when finished.*/
// static void disp_flush(lv_disp_drv_t *disp_drv, const lv_area_t *area,
//                        lv_color_t *color_p)
// {
//     if (disp_flush_enabled) {
//         /*The most simple case (but also the slowest) to put all pixels to the screen one-by-one*/

//         int32_t x;
//         int32_t y;
//         for (y = area->y1; y <= area->y2; y++) {
//             for (x = area->x1; x <= area->x2; x++) {
//                 /*Put a pixel to the display. For example:*/
//                 /*put_px(x, y, *color_p)*/
//                 color_p++;
//             }
//         }
//     }

//     /*IMPORTANT!!!
//      *Inform the graphics library that you are ready with the flushing*/
//     lv_disp_flush_ready(disp_drv);
// }

/*OPTIONAL: GPU INTERFACE*/

/*If your MCU has hardware accelerator (GPU) then you can use it to fill a memory with a color*/
//static void gpu_fill(lv_disp_drv_t * disp_drv, lv_color_t * dest_buf, lv_coord_t dest_width,
//                    const lv_area_t * fill_area, lv_color_t color)
//{
//    /*It's an example code which should be done by your GPU*/
//    int32_t x, y;
//    dest_buf += dest_width * fill_area->y1; /*Go to the first line*/
//
//    for(y = fill_area->y1; y <= fill_area->y2; y++) {
//        for(x = fill_area->x1; x <= fill_area->x2; x++) {
//            dest_buf[x] = color;
//        }
//        dest_buf+=dest_width;    /*Go to the next line*/
//    }
//}

void lv_port_indev_init(void)
{
    static lv_indev_drv_t indev_drv_mouse;
    lv_indev_drv_init(&indev_drv_mouse);
    indev_drv_mouse.type = LV_INDEV_TYPE_POINTER;
    indev_drv_mouse.read_cb = sdl_mouse_read;
    lv_indev_t *mouse_indev = lv_indev_drv_register(&indev_drv_mouse);
    (void)mouse_indev;

    static lv_indev_drv_t indev_drv_keyboard;
    lv_indev_drv_init(&indev_drv_keyboard);
    indev_drv_keyboard.type = LV_INDEV_TYPE_KEYPAD;
    indev_drv_keyboard.read_cb = sdl_keyboard_read;
    lv_indev_t *keyboard_indev = lv_indev_drv_register(&indev_drv_keyboard);
    (void)keyboard_indev;

    static lv_indev_drv_t indev_drv_mousewheel;
    lv_indev_drv_init(&indev_drv_mousewheel);
    indev_drv_mousewheel.type = LV_INDEV_TYPE_ENCODER;
    indev_drv_mousewheel.read_cb = sdl_mousewheel_read;
    lv_indev_t *mousewheel_indev = lv_indev_drv_register(&indev_drv_mousewheel);
    (void)mousewheel_indev;
}

/**
 * A task to measure the elapsed time for LVGL
 * @param data unused
 * @return never return
 */
static int tick_thread(void *data)
{
    (void)data;

    for (;;) {
        SDL_Delay(5);
        lv_tick_inc(5); /*Tell LittelvGL that 5 milliseconds were elapsed*/
    }

    return 0;
}

void lv_port_tick_init()
{
    printf("SDL creating sys_tick ...\n");
    SDL_CreateThread(tick_thread, "tick", NULL);
}
#else /*Enable this file at the top*/

/*This dummy typedef exists purely to silence -Wpedantic.*/
typedef int keep_pedantic_happy;
#endif
