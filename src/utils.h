#ifndef UTILS_H
#define UTILS_H

#ifdef _UNICODE
	#define TCSCN TEXT("%ls")
#else
	#define TCSCN TEXT("%s")
#endif

#endif
