CFLAGS=-Wall -g

objects := $(patsubst %.c,%,$(wildcard *.c))

all: $(objects)

clean:
	rm -f *.o
	rm -rf *.dSYM
