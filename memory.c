#include "memory.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MEMORY_SIZE 0x10000
uint8_t memory[MEMORY_SIZE];

void init_memory() {
    memset(memory, 0, MEMORY_SIZE);
}

void load_rom(const char* filename) {
    FILE* f = fopen(filename, "rb");
    if (!f) {
        perror("Failed to open ROM");
        exit(1);
    }

    fread(memory, 1, 0x8000, f); // Load max 32KB into 0x0000–0x7FFF
    fclose(f);
}

uint8_t read_byte(uint16_t address) {
    return memory[address];
}

void write_byte(uint16_t address, uint8_t value) {
    memory[address] = value;
}
