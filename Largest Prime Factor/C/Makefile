all: findLargePrime

findLargePrime: main.o findLargePrimeFactor.o
	gcc main.o findLargePrimeFactor.o -o findLargePrime -lm

main.o: src/main.c src/findLargePrimeFactor.h
	gcc -g -c src/main.c

findLargePrimeFactor.o: src/findLargePrimeFactor.c
	gcc -g -c src/findLargePrimeFactor.c

clean:
	rm *.o findLargePrime
