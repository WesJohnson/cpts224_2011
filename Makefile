EXES=ma.exe john_mcdonald_test.exe

all: $(EXES)

ma.o: ma.c cma.h
	gcc -c ma.c

cma.o: cma.c cma.h
	gcc -c cma.c
	
ma.exe: ma.o cma.o
	gcc ma.o cma.o -o ma.exe

john_mcdonald_test.o: john_mcdonald_test.c cma.h
	gcc -c john_mcdonald_test.c

john_mcdonald_test.exe: john_mcdonald_test.o cma.o
	gcc -o john_mcdonald_test.exe john_mcdonald_test.o cma.o

clean:
	-rm $(EXES)
	-rm *.o
