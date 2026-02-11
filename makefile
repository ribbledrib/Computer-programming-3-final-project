CC = gcc
FLAGS = -Wall -Wextra -pedantic
SRC = main.c
TARGET = main

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(FLAGS) $(STC) -o $(TARGET)

clean:
	rm -f $(TARGET)