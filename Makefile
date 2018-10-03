#This is a Makefile
#Don't change it unless you know what you're doing

SHELL = /bin/bash
CC = g++
CFLAGS = -g -Wall
OUTP = main.o AvgRainFall.o DollarChange.o MagicDates.o Nationals_Income_Calculator.o util.o

group3: $(OUTP)
	g++ $(CFLAGS) -o group3 $(OUTP)

main.o: main.cpp stdafx.h util.h
	g++ -c main.cpp

AvgRainFall.o: AvgRainFall.cpp util.h
	g++ -c AvgRainFall.cpp

DollarChange.o: DollarChange.cpp util.h
	g++ -c DollarChange.cpp

MagicDates.o: MagicDates.cpp util.h
	g++ -c MagicDates.cpp

Nationals_Income_Calculator.o: Nationals_Income_Calculator.cpp util.h
	g++ -c Nationals_Income_Calculator.cpp

util.o: util.cpp
	g++ -c util.cpp

clean:
	rm group3 $(OUTP)
