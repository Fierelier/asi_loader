#!/usr/bin/env sh
set -e
: ${CC:=i686-w64-mingw32-gcc}
: ${CFLAGS:="-O2 -Wall -Wextra"}
$CC $CFLAGS -o dll2h.exe dll2h.c
