#include "stdio_impl.h"

#define SH (8*sizeof(int)-1)
#define NORMALIZE(x) ((x)>>SH | -((-(x))>>SH))

int fwide(FILE *f, int mode)
{
	if (!f->mode) f->mode = NORMALIZE(mode);
	return f->mode;
}
