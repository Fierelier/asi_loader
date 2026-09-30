#!/usr/bin/env sh
export CFLAGS="-Os -D__USE_MINGW_ANSI_STDIO=0"
exec ./build.sh
