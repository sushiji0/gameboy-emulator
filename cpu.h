#ifndef CPU_H
#define CPU_H

#include <stdint.h>

typedef struct {
    uint8_t A, F; // Accumulator & Flags
    uint8_t B, C, D, E, H, L;
    uint16_t SP, PC; // Stack pointer, Program counter
} CPU;

extern CPU cpu;

void init_cpu();
void emulate_cycle();
void execute_opcode(uint8_t code);

#endif
