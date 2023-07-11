include(${PROJECT_SOURCE_DIR}/cmake/arm926ejs-musl-toolchain.cmake)

file(GLOB_RECURSE EXT_SOURCES
        "lv_drivers/display/fbdev.c"
        "lv_drivers/indev/evdev.c"
        "port/lv_port_indev.c"
        "port/lv_port_disp_fbdev.c"
        "port/lv_port_tick_linux.c"
)

file(GLOB_RECURSE EXT_INCLUDES
        "lv_drivers/display/fbdev.h"
        "lv_drivers/indev/evdev.h"
)