#This is a Makefile

all: group3.exe

group3.exe: group3.o
	g++ -o group3.exe group3.o

group3.o: group3.cc
	g++ -c group3.cc

clean:
	rm group3.o group3.exe
