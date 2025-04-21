CC=gcc
CFLAGS=-Wall -Wextra -std=c11 -g

all: gameboy

gameboy: src/main.o src/cpu.o src/memory.o
	$(CC) $(CFLAGS) -o gameboy $^

clean:
	rm -f src/*.o gameboy
