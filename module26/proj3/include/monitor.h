#pragma once

#include <vector>

class Monitor {
public:
    Monitor(int width, int height);
    void drawWindow(int x, int y, int width, int height);
    void display();

private:
    int width_;
    int height_;
    std::vector<std::vector<int>> screen_;
};