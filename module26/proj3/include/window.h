#pragma once

#include "monitor.h"

class Window {
public:
    Window(int x, int y, int width, int height);
    void move(int dx, int dy);
    void resize(int newWidth, int newHeight);
    void display(Monitor& monitor);
    int getX() const;
    int getY() const;
    int getWidth() const;
    int getHeight() const;

private:
    int x_;
    int y_;
    int width_;
    int height_;
};