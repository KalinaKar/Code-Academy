# -*- MakeFile -*-
CC = gcc

ifeq ($(OS),Windows_NT)
	RM = del /Q
	TARGET = scanner.exe
else
	RM = rm -f
	TARGET = scanner
endif

all:
	$(CC) main.c barcodeFunc.c tryFunc.c scanner.c -o $(TARGET)

clean:
	$(RM) $(TARGET)
