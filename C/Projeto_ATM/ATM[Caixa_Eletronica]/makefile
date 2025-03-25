CC = gcc

CFLAGS = -Wall

OBJECTS = atm.o main.o

TARGET = main

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) -o $(TARGET) $(OBJECTS)

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

atm.o: Func.c
	$(CC) $(CFLAGS) -c atm.c
