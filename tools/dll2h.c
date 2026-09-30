#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <tchar.h>
#include <stdio.h>
#include <stdlib.h>
#include <io.h>
#include <fcntl.h>

static unsigned rd16(const unsigned char *p) { return p[0] | (p[1] << 8); }

static unsigned long rd32(const unsigned char *p) {
	return (unsigned long)p[0] | ((unsigned long)p[1] << 8) |
	       ((unsigned long)p[2] << 16) | ((unsigned long)p[3] << 24);
}

static unsigned long rva2off(const unsigned char *b, unsigned long len, unsigned long so, unsigned n, unsigned long rva) {
	unsigned i;
	for (i = 0; i < n; ++i) {
		unsigned long r = so + (unsigned long)i * 40;
		if (r + 40 > len) break;
		unsigned long va = rd32(b + r + 12), sz = rd32(b + r + 16);
		if (rva >= va && rva < va + sz) return rva - va + rd32(b + r + 20);
	}
	return 0;
}

static int emit(const unsigned char *b, unsigned long len, FILE *o) {
	if (len < 0x40 || rd16(b) != 0x5A4D) return -1;
	unsigned long pe = rd32(b + 0x3C);
	if (pe + 0x18 > len || rd32(b + pe) != 0x4550) return -1;

	unsigned nsec = rd16(b + pe + 6), opt = rd16(b + pe + 20), magic = rd16(b + pe + 24);
	unsigned long so = pe + 24 + opt;
	unsigned long dd = magic == 0x20B ? pe + 136 : magic == 0x10B ? pe + 120 : 0;
	if (!dd || dd + 8 > len) return -1;

	unsigned long e = rva2off(b, len, so, nsec, rd32(b + dd));
	if (!e || e + 0x24 > len) return -1;

	unsigned long cnt = rd32(b + e + 0x18);
	unsigned long no = rva2off(b, len, so, nsec, rd32(b + e + 0x20));
	if (!no) return -1;

	unsigned long i;
	int w = 0;
	for (i = 0; i < cnt; ++i) {
		if (no + i * 4 + 4 > len) break;
		unsigned long s = rva2off(b, len, so, nsec, rd32(b + no + i * 4));
		if (s && s < len) { fprintf(o, "\tFWD(%s)\n", (const char *)(b + s)); ++w; }
	}
	return w;
}

int _tmain(int argc, TCHAR **argv) {
	if (argc != 2) { _ftprintf(stderr, TEXT("usage: %s <input.dll>\n"), argv[0]); return 1; }

	FILE *f = _tfopen(argv[1], TEXT("rb"));
	if (!f) { _ftprintf(stderr, TEXT("error: cannot open input\n")); return 1; }
	fseek(f, 0, SEEK_END);
	long len = ftell(f);
	fseek(f, 0, SEEK_SET);
	unsigned char *b = malloc(len > 0 ? (size_t)len : 1);
	if (!b || len <= 0 || fread(b, 1, (size_t)len, f) != (size_t)len) {
		_ftprintf(stderr, TEXT("error: read failed\n"));
		return 1;
	}
	fclose(f);

	_setmode(_fileno(stdout), _O_BINARY);
	int n = emit(b, (unsigned long)len, stdout);
	free(b);
	if (n < 0) { _ftprintf(stderr, TEXT("error: not a valid PE / no exports\n")); return 1; }
	return 0;
}
