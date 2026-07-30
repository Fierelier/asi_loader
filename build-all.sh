#!/usr/bin/env sh
cd src/dll
for dll in *; do
	echo "* $dll ..."
	cd ../..
	DLL="$dll" ./build.sh
	cd src/dll
done
