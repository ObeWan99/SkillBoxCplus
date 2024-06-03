#include "gpu.h"
#include "ram.h"
#include <iostream>

void GPU::display(RAM& ram) {
    for (int i = 0; i < 8; i++) {
        std::cout << "GPU: " << ram.read(i) << std::endl;
    }
}