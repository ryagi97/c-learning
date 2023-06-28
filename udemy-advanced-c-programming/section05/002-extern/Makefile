CC=gcc
CFLAGS= -c -Wall

all: prog

prog: extern.o vars.o
	${CC} extern.o vars.o -o extern

extern.o: extern.c
	${CC} ${CFLAGS} extern.c

vars.o: vars.c
	${CC} ${CFLAGS} vars.c

clean:
	rm -rf *.o extern
