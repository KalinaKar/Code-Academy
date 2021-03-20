# -*- MakeFile -*-
CC = gcc

ifeq ($(OS),Windows_NT)
	RM=del /Q
	TARGET=20210315_3.exe
else
	RM=rm -f
	TARGET=20210315_3
endif

all:
	$(CC) 20210315_3.c tree.c -o $(TARGET)

clean:
	$(RM) $(TARGET)