all: shiftbit bitcount

shiftbit: bitutils.o shiftbit.o bitcount.o
	gcc -g -ansi -Wall -pedantic bitutils.o shiftbit.o bitcount.o -o shiftbit

bitcount: bitutils.o bitcount.o bitcountmain.o
	gcc -g -ansi -Wall -pedantic bitutils.o bitcount.o bitcountmain.o -o bitcount

shiftbit.o: shiftbit.c
	gcc -c -ansi -Wall -pedantic shiftbit.c -o shiftbit.o

bitcount.o: bitcount.c
	gcc -c -ansi -Wall -pedantic bitcount.c -o bitcount.o

bitcountmain.o: bitcountmain.c
	gcc -c -ansi -Wall -pedantic bitcountmain.c -o bitcountmain.o

bitutils.o: bitutils.c
	gcc -c -ansi -Wall -pedantic bitutils.c -o bitutils.o
