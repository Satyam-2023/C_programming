CC=gcc  #compiler
TARGET=bcd #target file name

all: main.c printBinary.c decimalToBCD.c bcd.h
	$(CC) main.c decimalToBCD.c printBinary.c bcd.h -o $(TARGET) -I.
clean:
	rm -f $(TARGET)