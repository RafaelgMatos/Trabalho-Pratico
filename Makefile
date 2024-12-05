all: main

main: main.o pizza.o ingrediente.o
	gcc -o pizzaria main.o pizza.o ingrediente.o

main.o: main.c
	gcc -c main.c

pizza.o: pizza.c
	gcc -c pizza.c

ingrediente.o: ingrediente.c
	gcc -c ingrediente.c

clean:
	rm -f *.o pizzaria

run: all
	./pizzaria
