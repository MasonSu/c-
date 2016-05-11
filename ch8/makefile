#build an executable named myprog from myprog.c
#the compioer: gcc for C program, define as g++ for C++
CC=g++

#compiler flags:
#-g adds debugging information to the exeutable file
#-Wall turns on most, but not all, compiler warnings
#-std=c++0x enables ISO C++ 11 standard
CFLAGS=-g -Wall -std=c++0x

#the build target executable:
TARGET=8_6

all: $(TARGET)

$(TARGET): $(TARGET).cc Sales_data.cc Sales_data.h
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).cc Sales_data.cc 

clean:
	$(RM) $(TARGET)
