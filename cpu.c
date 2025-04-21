#include "cpu.h"

CPU cpu;

void init_cpu() {
    cpu.PC = 0x100;  // GB starts executing at 0x100
    cpu.SP = 0xFFFE; // Default stack pointer
}

void emulate_cycle() {
    // Fetch next opcode
    uint8_t opcode = read_byte(cpu.PC);

    // Decode & Execute
    switch (opcode) {
        case 0x00: // NOP
            cpu.PC += 1;
            break;
        default:
            printf("Unimplemented opcode: 0x%02X\n", opcode);
            break;
    }
}


void execute_opcode(uint8_t code){
    
}