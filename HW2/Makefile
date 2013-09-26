CC=gcc
CFLAGS=-DLINUX -ansi -Wall -D_GNU_SOURCE
CPPFLAGS=

all: SimpleShell

SimpleShell: SimpleShell.o
	$(CC) -o SimpleShell SimpleShell.o
	
 SimpleShell.o: SimpleShell.c
	$(CC) -c SimpleShell.c
	
clean:
	rm -f  SimpleShell  SimpleShell.o