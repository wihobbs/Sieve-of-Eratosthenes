CC = g++

FLAGS = -std=c++17
FLAGS += -Wall
FLAGS += -g
FLAGS += -I..
FLAGS += -fopenmp

LINK = $(CC) $(FLAGS) -o

COMPILE = $(CC) $(FLAGS) -c 

bin/sieve.o : src/sieve.cc inc/sieve.h
	$(COMPILE) -o $@ $<

sieve : bin/sieve.o
	$(LINK) $@ $^

clean:
	@rm -f sieve
