#ifndef THUNKS_H
#define THUNKS_H
	#define THUNK_SIZE 16
	typedef struct {
		const char *name;
		unsigned char *thunk;
	} export_entry;
	extern export_entry export_table[];
	extern unsigned long export_count;
#endif
