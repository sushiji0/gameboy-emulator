#include <stdio.h>
#include "cpu.h"
#include "memory.h"

int main(int argc, char** argv) {
    if (argc < 2) {
        printf("Usage: %s romfile.gb\n", argv[0]);
        return 1;
    }

    init_memory();
    load_rom(argv[1]);

    init_cpu();

    while (1) {
        emulate_cycle();
    }

    return 0;
}
