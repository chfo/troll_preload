GCC   = gcc
FLAGS = -O3 -shared -fPIC 

sources = $(wildcard *.c)
libs = $(patsubst %.c,%.so,$(sources))

all: $(libs)

%.so: %.c
	$(GCC) $(FLAGS) $< -o $@

clean:
	rm -f $(libs)
