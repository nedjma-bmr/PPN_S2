
# -- Compiler Option
CC=g++
CFLAGS=-g -Wall

#################################################################
# makefile
############



all:graphe
 
graphe: 
	$(CC) $(CFLAGS) main.cpp graphe.cpp graphe.h -o Main

clean:
	@rm -Rf Main