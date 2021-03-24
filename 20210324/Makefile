main: long.o copy.o
	gcc -o main long.o copy.o
long.o: long.c copy.h
	gcc -c long.c
copy.o:
	gcc -c copy.c

clean:
	rm copy.o long.o main
