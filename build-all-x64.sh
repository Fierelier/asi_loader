#!/usr/bin/env sh
export CC="x86_64-w64-mingw32-gcc"
export CFLAGS="-Os -DUNICODE -D_UNICODE -march=x86-64"
exec ./build-all.sh
