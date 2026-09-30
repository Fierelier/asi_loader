#!/usr/bin/env sh
set -e
: ${CC:=i686-w64-mingw32-gcc}
: ${CFLAGS:="-Os -DUNICODE -D_UNICODE"} # For WIN9X, use "-Os -D__USE_MINGW_ANSI_STDIO=0" (see build-all-ansi.sh)
: ${LDFLAGS:="-static-libgcc -static-libstdc++ -Wl,--kill-at"}
: ${OUT:=asi_loader}

mkdir -p bin obj

cd src
for i in *.c; do
	o="${i%.c}.o"
	odir="$(dirname "$o")"
	mkdir -p "../obj/$odir"
	$CC -c -o "../obj/$o" -I. -Idll -Wall -Wextra -march=i486 -D_WIN32_WINNT=0x0400 -DWINVER=0x0400 $CFLAGS "$i"
done
cd ..

$CC -Isrc -Isrc/dll -Wall -Wextra -march=i486 -D_WIN32_WINNT=0x0400 -DWINVER=0x0400 $CFLAGS \
	-shared -o "bin/$OUT.dll" \
	obj/*.o \
	$LDFLAGS

rm -f bin/$OUT.def || true
