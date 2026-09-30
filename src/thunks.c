#include "thunks.h"

#define FWD(n) __declspec(dllexport) unsigned char n[THUNK_SIZE];
#include "dll/all.h"
#undef FWD

export_entry export_table[] = {
	#define FWD(n) { #n, n },
	#include "dll/all.h"
	#undef FWD
};
unsigned long export_count = sizeof(export_table) / sizeof(export_table[0]);
