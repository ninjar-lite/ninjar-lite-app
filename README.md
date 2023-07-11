<h1 align="center">
	LVGL Linux Template
</h1>

Introducing the **LVGL Linux Template**. It's a LVGL template project for Embedded Linux with cross-compilation, simulation and more functions. using cmake and based on lvgl 8.3.0.

Requirements
-----------------------
on a Ubuntu like machine, you could install requirements like this:
```
$ sudo apt install git libsdl2-dev build-essential ninja-build cmake
```


Build
-----------------------
1) Build for simulating

```
$ ./build.sh -s
...
$ ./simulator
```

2) Build for a target system
```
$ ./build.sh -t
...
$ file ./demo
./demo: symbolic link to /home/developer/sources/ninjar-lite-app/dist-target/demo
```

Build other platform, add a toolchain file into cmake/ dir
for example, a armel toolchain file be like this:
```
#SET(CROSS_COMPILE 1)
#set(CMAKE_SYSTEM_NAME Linux)

set(TOOLCHAIN_PATH /opt/arm-buildroot-linux-musleabi_sdk-buildroot)
set(CMAKE_C_COMPILER ${TOOLCHAIN_PATH}/bin/arm-buildroot-linux-musleabi-gcc)
#set(CMAKE_CXX_COMPILER ${TOOLCHAIN_PATH}/bin/arm-buildroot-linux-musleabi-g++)
```
