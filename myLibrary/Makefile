# -*- MakeFile -*-
CC = gcc

ifeq ($(OS),Windows_NT)
	RM = del /Q
	TARGET = mylib.exe
else
	RM = rm -f
	TARGET = mylib
endif

all:
	$(CC) main.c myFunc.c -o $(TARGET)

clean:
	$(RM) $(TARGET)