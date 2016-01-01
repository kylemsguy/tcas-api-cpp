CC=gcc
CFLAGS=-g -I.

testprog: testprog.o
	$(CC) -o testprog testprog.o

%.o: %.c %.h
	$(CC) -c -o $@ $< $(CFLAGS)

clean:
	rm -f *.o