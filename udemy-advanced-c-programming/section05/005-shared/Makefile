CC=gcc
CFLAGS= -c -Wall

all: prog

prog: main.o display.o
	${CC} main.o display.o -o main

main.o: main.c
	${CC} ${CFLAGS} main.c

display.o: display.c
	${CC} ${CFLAGS} display.c

clean:
	rm -rf *.o main
