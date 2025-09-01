# Makefile for compiling embedded system code
CC = arm-none-eabi-gcc
CFLAGS = -Wall -O2
SRC = main.c
OBJ = main.o
TARGET = firmware.hex

all: $(TARGET)

$(TARGET): $(OBJ)
    $(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

%.o: %.c
    $(CC) $(CFLAGS) -c $< -o $@
    
clean:
    rm -f $(OBJ) $(TARGET)
