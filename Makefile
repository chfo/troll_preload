GCC   = gcc
FLAGS = -O3 -shared -fPIC 

all: troll.so troll_verbose.so troll_fork.so

troll.so:  troll.c
	$(GCC) $(FLAGS) troll.c -o troll.so

troll_verbose.so: troll_verbose.c
	$(GCC) $(FLAGS) troll_verbose.c -o troll_verbose.so

troll_fork.so: troll_fork.c
	$(GCC) $(FLAGS) troll_fork.c -o troll_fork.so

clean:
	rm -f  troll.so troll_verbose.so troll_fork.so
