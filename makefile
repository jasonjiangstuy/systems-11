all: main.o random.o
	gcc -o a.out main.o random.o

main.o: main.c random.h
	gcc -c main.c

random.o: random.c
	gcc -c random.c

run: a.out
	./a.out
