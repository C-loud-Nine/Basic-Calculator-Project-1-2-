all: ff
ff: main.o calculation.o
	gcc main.o calculation.o -o output
main.o: main.c
	gcc -c main.c
calculation.o: calculation.c
	gcc -c calculation.c
clear:
	del *.o *.exe
