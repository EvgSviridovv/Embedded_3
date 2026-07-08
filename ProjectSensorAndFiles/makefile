# Makefile 
all: prog
prog: main.o temp_functions.o
	gcc -o prog main.o temp_functions.o
main.o: main.c temp_functions.h
	gcc -c -o main.o main.c
temp_functions.o: temp_functions.c
	gcc -c -o temp_functions.o temp_functions.c
clean:
	make	rm -rf *.o prog

#all:
#	gcc -o tmp_app main.c
#
help:
	@echo Hello World!

.PHONY: help