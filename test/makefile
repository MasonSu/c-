#build an executable named myprog from myprog.c
#the compioer: gcc for C program, define as g++ for C++
CC=clang++

#compiler flags:
#-g adds debugging information to the exeutable file
#-Wall turns on most, but not all, compiler warnings
#-std=c++0x enables ISO C++ 11 standard
CFLAGS=-std=c++11 -g -Wall 

#the build target executable:
TARGET=copy_constructor shared_reset friend_class image_read  \
					delete new_class lambda

all: $(TARGET)

%: %.cpp
	$(CC) $(CFLAGS) $< -o $@

clean:
	$(RM) $(TARGET)
