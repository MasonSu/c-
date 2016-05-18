#build an executable named myprog from myprog.c
#the compioer: gcc for C program, define as g++ for C++
CC=clang++

#compiler flags:
#-g adds debugging information to the exeutable file
#-Wall turns on most, but not all, compiler warnings
#-std=c++0x enables ISO C++ 11 standard
CFLAGS=-g -Wall -std=c++11

#the build target executable:
TARGET=11_4 11_7 11_12 11_14 11_20 \
		11_23 11_31

all: $(TARGET)

%: %.cc
	$(CC) $(CFLAGS) $< -o $@

clean:
	$(RM) $(TARGET)
