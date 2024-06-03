#include "window.h"

Window::Window(int x, int y, int width, int height) : x_(x), y_(y), width_(width), height_(height) {}

void Window::move(int dx, int dy) {
    x_ += dx;
    y_ += dy;
    if (x_ < 0) {
        x_ = 0;
    }
    if (y_ < 0) {
        y_ = 0;
    }
    if (x_ + width_ > 80) {
        x_ = 80 - width_;
    }
    if (y_ + height_ > 50) {
        y_ = 50 - height_;
    }
}

void Window::resize(int newWidth, int newHeight) {
    if (newWidth > 0 && newHeight > 0) {
        width_ = newWidth;
        height_ = newHeight;
    }
}

void Window::display(Monitor& monitor) {
    monitor.drawWindow(x_, y_, width_, height_);
}

int Window::getX() const {
    return x_;
}

int Window::getY() const {
    return y_;
}

int Window::getWidth() const {
    return width_;
}

int Window::getHeight() const {
    return height_;
}