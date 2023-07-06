CC       = gcc
CFLAGS   = -Wall -g
LDFLAGS  =
DEPS	 = calc.h
OBJFILES = getop.o stack.o expr.o
TARGET   = expr

all: ${TARGET}

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c -o $@ $<

$(TARGET): $(OBJFILES) $(DEPS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJFILES) $(LDFLAGS)

clean:
	rm -f $(OBJFILES) $(TARGET) *~ *.gch