CC = gcc
CFLAGS = -Wall -Wpedantic

all: pc_search pc_gen
		

pc_search: pc_search.c
	$(CC) $(CFLAGS) pc_search.c -o pc_search

pc_gen: pc_gen.c
	$(CC) $(CFLAGS) pc_gen.c -o pc_gen

clean:
	rm pc_gen pc_search
