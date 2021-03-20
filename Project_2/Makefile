# -*- MakeFile -*-
CC=gcc

ifeq ($(OS),Windows_NT)
	RM = del /Q
	TARGET = fruits.exe
else
	RM = rm -f
	TARGET = fruits
endif

all:
	$(CC) main.c body.c -o $(TARGET)

clean:
	$(RM) $(TARGET)
