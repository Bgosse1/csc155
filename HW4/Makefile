CC=gcc

all: 		mystat

mystat:		mystat.o
			${CC} -o mystat mystat.o

mystat.o:	HW4Q2.c
			${CC} -c mystat.c

clean:
			rm *.o mystat

