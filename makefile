all: 
	gcc -o main work02.c

run: main
	./main

clean: 
	rm *.o
