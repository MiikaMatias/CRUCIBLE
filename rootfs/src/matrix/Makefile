AR=ar
CC=gcc
CFLAGS=-Wall -g

all: libmatrix.a
	
libmatrix.o: libmatrix.c
	$(CC) $(CFLAGS) -c libmatrix.c

librarytest: librarytest.c libmatrix.o
	$(CC) $(CFLAGS) -o $@ $^

libmatrix.a: librarytest libmatrix.o
	$(AR) rcs $@ libmatrix.o 

clean:
	rm *.o *.a librarytest