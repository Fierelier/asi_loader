#!/usr/bin/env sh
set -e
cd src/dll
for dll in *; do
	echo "* $dll ..."
	cd ../..
	DLL="$dll" ./build.sh
	cd src/dll
done
