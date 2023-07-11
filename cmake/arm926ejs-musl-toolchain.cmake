#SET(CROSS_COMPILE 1)
#set(CMAKE_SYSTEM_NAME Linux)

set(TOOLCHAIN_PATH /opt/arm-buildroot-linux-musleabi_sdk-buildroot)
set(CMAKE_C_COMPILER ${TOOLCHAIN_PATH}/bin/arm-buildroot-linux-musleabi-gcc)
#set(CMAKE_CXX_COMPILER ${TOOLCHAIN_PATH}/bin/arm-buildroot-linux-musleabi-g++)