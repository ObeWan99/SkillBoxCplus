#include "kbd.h"
#include "ram.h"
#include <iostream>

void KBD::write(RAM& ram) {
    int numbers[8];
    for (int i = 0; i < 8; i++) {
        std::cout << "Enter number " << i + 1 << ": ";
        std::cin >> numbers[i];
    }
    ram.write(numbers);
}
