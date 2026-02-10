abc = gcc
flags = -Wall -Wextra -pedantic
src = main.c
target = main

all: $(target)

$(target): $(src)
	gcc $(flags) $(src) -o $(target)

clean:
	rm -f $(target)