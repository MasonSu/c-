#build an executable named myprog from myprog.c
#the compioer: gcc for C program, define as g++ for C++
CC=clang++

#compiler flags:
#-g adds debugging information to the exeutable file
#-Wall turns on most, but not all, compiler warnings
#-std=c++0x enables ISO C++ 11 standard
CFLAGS=-g -Wall -std=c++0x

#the build target executable:
TARGET=10_1 10_2 10_3 10_6 10_9 \
		10_27 10_34 10_37 10_42

all: $(TARGET)

%: %.cc
	$(CC) $(CFLAGS) $< -o $@

clean:
	$(RM) $(TARGET)
