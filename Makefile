CC=gcc
CFLAGS=-DLINUX -ansi -Wall -D_GNU_SOURCE
CPPFLAGS=

all: ls2

ls2: ls2.o
	$(CC) -o ls2 ls2.o
	
ls2.o: ls2.c
	$(CC) -c ls2.c
	
clean:
	rm -f ls2 ls2.o