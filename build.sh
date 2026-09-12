#!/usr/bin/env sh
set -e
: ${CC:=i686-w64-mingw32-gcc}
: ${CFLAGS:="-Os -DUNICODE -D_UNICODE"} # For WIN9X, remove "-DUNICODE -D_UNICODE"
: ${LDFLAGS:="-static-libgcc -static-libstdc++ -Wl,--kill-at"}
: ${DLL:=dinput8}

# Build
mkdir -p bin obj

cd src
for i in *.c; do
	o="${i%.c}.o"
	odir="$(dirname "$o")"
	mkdir -p "../obj/$odir"
	$CC -c -o "../obj/$o" -I. -Idll/$DLL -Wall -Wextra -march=i486 -D_WIN32_WINNT=0x0400 -DWINVER=0x0400 $CFLAGS "$i"
done
cd ..

$CC $CFLAGS -Isrc -Isrc/dll/$DLL -Wall -Wextra -march=i486 -D_WIN32_WINNT=0x0400 -DWINVER=0x0400 $CFLAGS \
	-shared -o "bin/$DLL.dll" \
	obj/*.o \
	$LDFLAGS

rm -f bin/$DLL.def || true
