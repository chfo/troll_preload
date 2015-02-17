#include <stdlib.h>
#include <stdio.h>

static void init()  __attribute__((constructor));

void init() {
	printf(
" *       \n"
" ( |\\ /| \n"
"  ) . .  \n"
"  ( =*=  \n"
"   (   ) \n"
"   .. .. \n");
	exit(0);
}