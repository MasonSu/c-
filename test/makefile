#build an executable named myprog from myprog.c
#the compioer: gcc for C program, define as g++ for C++
CC=clang++

#compiler flags:
#-g adds debugging information to the exeutable file
#-Wall turns on most, but not all, compiler warnings
#-std=c++0x enables ISO C++ 11 standard
CFLAGS=-std=c++11 -g -Wall 

#the build target executable:
TARGET=pointer_reference

all: $(TARGET)

%: %.cpp
	$(CC) $(CFLAGS) $< -o $@

clean:
	$(RM) $(TARGET)
