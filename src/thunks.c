#include "thunks.h"

#define cat_(a, b) a##b
#define cat(a, b) cat_(a, b)

#if defined(__TINYC__)
	#define fwd_i(n, c) __declspec(dllexport) unsigned char cat(thunk_, c)[THUNK_SIZE] __asm__(#n);
	#define FWD(o, n) fwd_i(n, __COUNTER__)
#else
	#ifdef _WIN64
		#define sym_prefix ""
	#else
		#define sym_prefix "_"
	#endif

	#define fwd_decl(sym, exp) \
		__asm__(".comm \"" sym_prefix sym "\",16\n\t.section .drectve\n\t.ascii \" -export:" exp "\"\n\t.text");

	#define fwd_second_(a, b, ...) b
	#define fwd_second(...) fwd_second_(__VA_ARGS__, ~)
	#define fwd_probe_0 ~, 1,
	#define fwd_is_zero(o) fwd_second(cat(fwd_probe_, o) 0, 0)

	#define fwd_name(n) fwd_decl(#n, "\\\"" #n "\\\",data")
	#define fwd_ord_0(o) fwd_decl("ord_" #o, "\\\"ord_" #o "\\\" @" #o " NONAME DATA")
	#define fwd_ord_1(o)
	#define fwd_ord(o) cat(fwd_ord_, fwd_is_zero(o))(o)

	#define FWD(o, n) fwd_name(n) fwd_ord(o)
#endif

#include "dll/all.h"
#undef FWD

export_entry export_table[] = {
	#define FWD(o, n) { dllname, o, #n },
	#include "dll/all.h"
	#undef FWD
};
unsigned long export_count = sizeof(export_table) / sizeof(export_table[0]);
