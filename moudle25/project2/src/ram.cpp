#include "ram.h"

void RAM::write(int* numbers) {
    for (int i = 0; i < 8; i++) {
        this->numbers[i] = numbers[i];
    }
}

int RAM::read(int index) {
    return numbers[index];
}

// void RAM::set(int* numbers) {
//     for (int i = 0; i < 8; i++) {
//         numbers[i] = this->numbers[i];
//     }
// }