#define WIN32_LEAN_AND_MEAN
#define NOGDI
#include <windows.h>
#include <string.h>
#include "exports.h"

#define THUNK_SIZE 16

#define FWD(name) __declspec(dllexport) unsigned char name[THUNK_SIZE];
#include "dll/all.h"
#undef FWD

typedef struct {
	const char *name;
	unsigned char *thunk;
} export_entry;

static export_entry export_table[] = {
	#define FWD(n) { .name = #n, .thunk = n },
	#include "dll/all.h"
	#undef FWD
};

#define EXPORT_COUNT (sizeof(export_table) / sizeof(export_table[0]))

static void write_thunk(unsigned char *slot, void *target) {
	DWORD old_protect;
	VirtualProtect(slot, THUNK_SIZE, PAGE_EXECUTE_READWRITE, &old_protect);
#ifdef _WIN64
	slot[0] = 0x48;
	slot[1] = 0xB8;
	memcpy(slot + 2, &target, 8);
	slot[10] = 0xFF;
	slot[11] = 0xE0;
#else
	{
		unsigned int cell = (unsigned int)(size_t)(slot + 6);
		slot[0] = 0xFF;
		slot[1] = 0x25;
		memcpy(slot + 2, &cell, 4);
		memcpy(slot + 6, &target, 4);
	}
#endif
	FlushInstructionCache(GetCurrentProcess(), slot, THUNK_SIZE);
}

void exports_bind(HMODULE real_module) {
	size_t i;
	for (i = 0; i < EXPORT_COUNT; ++i) {
		write_thunk(export_table[i].thunk, (void *)GetProcAddress(real_module, export_table[i].name));
	}
}
