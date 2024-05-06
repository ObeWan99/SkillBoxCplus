#include "cpu.h"
#include "ram.h"
#include <iostream>

void CPU::compute(RAM& ram) {
    int sum = 0;
    for (int i = 0; i < 8; i++) {
        sum += ram.read(i);
    }
    std::cout << "Sum: " << sum << std::endl;
}