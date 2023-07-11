cmake_minimum_required(VERSION 3.10)
project(NINJAR-lite)

# set(CMAKE_C_STANDARD 11)
INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR})
include_directories(./)

file(GLOB_RECURSE COMMON_INCLUDES "lvgl/*.h" "./*.h")

file(GLOB_RECURSE COMMON_SOURCES "lvgl/src/*.c"
    "lvgl/demos/*.c"
    "lvgl/examples/*.c"
)

set(CMAKE_BUILD_TYPE "Release")
set(WARINGS "-Wall -Wextra \
    -Wshadow -Wundef -Wmaybe-uninitialized -Wmissing-prototypes -Wno-discarded-qualifiers \
    -Wno-unused-function -Wno-error=strict-prototypes -Wpointer-arith -fno-strict-aliasing -Wno-error=cpp -Wuninitialized \
    -Wno-unused-parameter -Wno-missing-field-initializers -Wno-format-nonliteral -Wno-cast-qual -Wunreachable-code -Wno-switch-default  \
    -Wreturn-type -Wmultichar -Wformat-security -Wno-ignored-qualifiers -Wno-error=pedantic -Wno-sign-compare -Wno-error=missing-prototypes \
    -Wdouble-promotion -Wclobbered -Wdeprecated -Wempty-body -Wshift-negative-value -Wstack-usage=2048 \
    -Wtype-limits -Wsizeof-pointer-memaccess -Wpointer-arith")
SET(CMAKE_C_FLAGS_RELEASE " -O3 ${WARINGS}")
SET(CMAKE_C_FLAGS_DEBUG "-static -O3 -g ${WARINGS}")

link_libraries(pthread)

if(CROSS_COMPILE)
    message("building for target system ...")
    include(${PROJECT_SOURCE_DIR}/cmake/target.cmake)
    add_executable(demo main.c ${COMMON_SOURCES} ${INCLUDES} ${EXT_SOURCES} ${EXT_INCLUDES})
else()
    message("building for simulator system ...")
    include(${PROJECT_SOURCE_DIR}/cmake/simulator.cmake)
    add_executable(demo main.c ${COMMON_SOURCES} ${INCLUDES} ${EXT_SOURCES} ${EXT_INCLUDES})
    target_link_libraries(demo SDL2 m)
endif()
