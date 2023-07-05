CC=gcc
CFLAGS=-Wall
TARGET=expr

all: ${TARGET}

%.o: %.c %.h
	$(CC) $(CFLAGS) -o $@ $^

$(TARGET): getop.o stack.o calc.h expr.c
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f *.o expr