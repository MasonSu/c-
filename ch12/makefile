#build an executable named myprog from myprog.c
#the compioer: gcc for C program, define as g++ for C++
CC=clang++

#compiler flags:
#-g adds debugging information to the exeutable file
#-Wall turns on most, but not all, compiler warnings
#-std=c++0x enables ISO C++ 11 standard
CFLAGS=-g -Wall -std=c++11

#the build target executable:
TARGET=main

all: $(TARGET)

$(TARGET): $(TARGET).cc TextQuery.cc TextQuery.h QueryResult.cc QueryResult.h
	$(CC) $(CFLAGS) $(TARGET).cc TextQuery.cc QueryResult.cc -o $(TARGET)

#%: %.cc
#	$(CC) $(CFLAGS) $< -o $@

clean:
	$(RM) $(TARGET)
