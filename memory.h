#ifndef MEMORY_H
#define MEMORY_H

#include <stdint.h>

void init_memory();
void load_rom(const char* filename);
uint8_t read_byte(uint16_t address);
void write_byte(uint16_t address, uint8_t value);

#endif
