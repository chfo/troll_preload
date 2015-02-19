#include <stdlib.h>
#include <time.h>

static void init()  __attribute__((constructor));

void init() {
	struct timeval time;
	gettimeofday(&time, NULL);
	srandom((time.tv_sec * 1000) + (time.tv_usec / 1000));
	if (random() < RAND_MAX/2)
		exit(0);
}
