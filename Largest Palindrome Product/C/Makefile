all: largestPalindromeProduct

largestPalindromeProduct: main.o functions.o
	gcc main.o functions.o -o largestPalindromeProduct -lm

main.o: src/main.c src/functions.h
	gcc -g -c src/main.c

functions.o: src/functions.c
	gcc -g -c src/functions.c

clean:
	rm *.o largestPalindromeProduct
