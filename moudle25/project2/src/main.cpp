#include <iostream>
#include "cpu.h"
#include "ram.h"
#include "disk.h"
#include "gpu.h"
#include "kbd.h"

int main() {
    CPU cpu;
    RAM ram;
    Disk disk;
    GPU gpu;
    KBD kbd;

    while (true) {
        std::string command;
        std::cout << "Enter command (sum, save, load, input, display, exit): ";
        std::cin >> command;

        if (command == "sum") {
            cpu.compute(ram);
        } else if (command == "save") {
            disk.save(ram);
        } else if (command == "load") {
            disk.load(ram);
        } else if (command == "input") {
            kbd.write(ram);
        } else if (command == "display") {
            gpu.display(ram);
        } else if (command == "exit") {
            break;
        } else {
            std::cout << "Invalid command. Try again." << std::endl;
        }
    }

    return 0;
}
