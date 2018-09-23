#This is a Makefile

SHELL = /bin/bash
HEADERS = AvgRainFall.h DollarChange.h MagicDates.h NSSeating.h
CC = g++
CFLAGS = -g -WALL
TARGET = group3

all: $(TARGET)

$(TARGET): $(TARGET).cc
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).cc

clean:
	$(RM) $(TARGET)
