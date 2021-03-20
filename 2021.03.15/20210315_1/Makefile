# -*- MakeFile -*-
CC = gcc

ifeq ($(OS),Windows_NT)
	RM=del /Q
	TARGET=20210315_1.exe
else
	RM=rm -f
	TARGET=20210315_1
endif

all:
	$(CC) main.c 1.c -o $(TARGET)

clean:
	$(RM) $(TARGET)