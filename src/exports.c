#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <string.h>
#include <tchar.h>
#include "exports.h"
#include "thunks.h"

static void write_thunk(unsigned char *slot, void *target) {
	DWORD old_protect;
	VirtualProtect(slot, THUNK_SIZE, PAGE_EXECUTE_READWRITE, &old_protect);
#ifdef _WIN64
	slot[0] = 0x48; slot[1] = 0xB8; memcpy(slot + 2, &target, 8);
	slot[10] = 0xFF; slot[11] = 0xE0;
#else
	{
		unsigned int cell = (unsigned int)(size_t)(slot + 6);
		slot[0] = 0xFF; slot[1] = 0x25; memcpy(slot + 2, &cell, 4);
		memcpy(slot + 6, &target, 4);
	}
#endif
	FlushInstructionCache(GetCurrentProcess(), slot, THUNK_SIZE);
}

static int dll_name_matches(const TCHAR *a, const char *b) {
	for (; *a && *b; ++a, ++b) {
		TCHAR ca = *a;
		TCHAR cb = (unsigned char)*b;
		if (ca >= 'A' && ca <= 'Z') ca += 'a' - 'A';
		if (cb >= 'A' && cb <= 'Z') cb += 'a' - 'A';
		if (ca != cb) return 0;
	}
	return !*a && !*b;
}

void exports_bind(HMODULE real_module, const TCHAR *dll_filename) {
	unsigned long i;
	MEMORY_BASIC_INFORMATION mbi;
	HMODULE self;
	VirtualQuery((void *)exports_bind, &mbi, sizeof(mbi));
	self = (HMODULE)mbi.AllocationBase;
	for (i = 0; i < export_count; ++i) {
		const export_entry *entry = &export_table[i];
		void *target = (void *)GetProcAddress(real_module, entry->name);
		unsigned char *slot = (unsigned char *)GetProcAddress(self, entry->name);
		if (slot) write_thunk(slot, target);
		if (entry->ordinal && dll_name_matches(dll_filename, entry->dll)) {
			slot = (unsigned char *)GetProcAddress(self, (LPCSTR)(size_t)entry->ordinal);
			if (slot) write_thunk(slot, target);
		}
	}
}
