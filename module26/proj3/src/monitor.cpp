#include "monitor.h"
#include <iostream>

Monitor::Monitor(int width, int height) : width_(width), height_(height), screen_(width, std::vector<int>(height, 0)) {}

void Monitor::drawWindow(int x, int y, int width, int height) {
    for (int i = y; i < y + height; ++i) {
        for (int j = x; j < x + width; ++j) {
            if (i >= 0 && i < height_ && j >= 0 && j < width_) {
                screen_[i][j] = 1;
            }
        }
    }
}

void Monitor::display() {
    for (const auto& row : screen_) {
        for (int pixel : row) {
            std::cout << pixel << " ";
        }
        std::cout << std::endl;
    }
}
