# Makefile for HW 0
# PSU CSE 597-002, Fall 2018
#
# Roman Istomin
# rji5040@psu.edu
# August 2018

GCC=g++
CFLAGS=-c -g


all: hello
    
hello: hello.o 
	$(GCC) hello.o -o hello

hello.o:
	$(GCC) $(CFLAGS) hello_world.cpp -o hello.o

clean:
	rm *o awl5173_helloWorld.out
