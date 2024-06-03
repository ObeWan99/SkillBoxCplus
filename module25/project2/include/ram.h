#pragma once
class RAM {
public:
    void write(int* numbers);
    int read(int index);
    int numbers[8];
};