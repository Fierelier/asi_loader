#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <string.h>
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

void exports_bind(HMODULE real_module) {
	unsigned long i;
	MEMORY_BASIC_INFORMATION mbi;
	HMODULE self;
	VirtualQuery((void *)exports_bind, &mbi, sizeof(mbi));
	self = (HMODULE)mbi.AllocationBase;
	for (i = 0; i < export_count; ++i) {
		unsigned char *slot = (unsigned char *)GetProcAddress(self, export_table[i].name);
		if (slot) write_thunk(slot, (void *)GetProcAddress(real_module, export_table[i].name));
	}
}
