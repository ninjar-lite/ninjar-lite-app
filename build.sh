#!/bin/bash

WORKDIR=$(pwd)

DIR_DIST_TARGET=${WORKDIR}/dist-target
DIR_DIST_SIMULATOR=${WORKDIR}/dist-simulator

function do_compile_commands() {
    if [ ! -f "${WORKDIR}/compile_commands.json" ]; then
        echo "can't find compile_commands.json"
        mkdir -p "${WORKDIR}/tmp" && pushd "${WORKDIR}/tmp"
        cmake -DCROSS_COMPILE=1 .. && bear -- make -j
        cp compile_commands.json "${WORKDIR}/"
        popd
        rm -rf tmp/
    else
        echo "compile_commands.json exists"
    fi
}

function do_build_target() {
    mkdir -p "${DIR_DIST_TARGET}" && cd "${DIR_DIST_TARGET}"

    cmake -DCROSS_COMPILE=1 -G Ninja  .. && ninja

    cd ${WORKDIR}

    ln -sf "${DIR_DIST_TARGET}/demo" ./demo
}

function do_build_simulator() {
    echo "Building simulator ..."
    mkdir -p "${DIR_DIST_SIMULATOR}" && cd "${DIR_DIST_SIMULATOR}"

    cmake .. -G Ninja && ninja

    cd ${WORKDIR}

    ln -sf "${DIR_DIST_SIMULATOR}/demo" ./simulator
}

function do_usage() {
cat << "EOF" >> /dev/tty
        -h      print this usage
        
        all     build all things
        
        -c      build compile_commands.json
        
        -t      build for target
        
        -s      build for simulating
EOF
}

case $1 in
    "-h")
        exit 0
        ;;
    "all")
        do_compile_commands
        do_build_target
        do_build_simulator
        exit 0
        ;;
    "-c")
        do_compile_commands
        exit 0
        ;;
    "-t")
        do_build_simulator
        exit 0
        ;;
    "-s")
        do_build_simulator
        exit 0
esac

do_usage