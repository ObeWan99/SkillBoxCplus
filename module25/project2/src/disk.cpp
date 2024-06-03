#include "disk.h"
#include "ram.h"
#include <iostream>
#include <fstream>

void Disk::save(RAM& ram) {
    std::ofstream file("data.txt");
    if (file.is_open()) {
        for (int i = 0; i < 8; i++) {
            file << ram.read(i) << "\n";
        }
        file.close();
    } else {
        std::cerr << "Unable to open file for writing." << std::endl;
    }
}

void Disk::load(RAM& ram) {
    std::ifstream file("data.txt");
    if (file.is_open()) {
        for (int i = 0; i < 8; i++) {
            file >> ram.numbers[i];
        }
        file.close();
    } else {
        std::cerr << "Unable to open file for reading." << std::endl;
    }
}
