#include "thunks.h"

#define cat_(a, b) a##b
#define cat(a, b) cat_(a, b)

#if defined(__TINYC__) || defined(_WIN64)
	#define fwd_i(n, c) __declspec(dllexport) unsigned char cat(thunk_, c)[THUNK_SIZE] __asm__(#n);
#else
	#define fwd_i(n, c) \
		unsigned char cat(thunk_, c)[THUNK_SIZE] __asm__("_" #n); \
		__asm__(".section .drectve\n\t.ascii \" -export:\\\"" #n "\\\",data\"\n\t.text");
#endif

#define FWD(n) fwd_i(n, __COUNTER__)
#include "dll/all.h"
#undef FWD

export_entry export_table[] = {
	#define FWD(n) { #n, 0 },
	#include "dll/all.h"
	#undef FWD
};
unsigned long export_count = sizeof(export_table) / sizeof(export_table[0]);
