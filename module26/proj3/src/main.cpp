#include "window.h"
#include "monitor.h"
#include <iostream>
#include <string>

int main() {
    Monitor monitor(80, 50);

    Window window(10, 10, 20, 20);

    while (true) {
        std::string command;
        std::cout << "Enter command (move, resize, display, close): ";
        std::cin >> command;

        if (command == "move") {
            int dx, dy;
            std::cin >> dx >> dy;
            window.move(dx, dy);
            std::cout << "New window position: (" << window.getX() << ", " << window.getY() << ")" << std::endl;
        } else if (command == "resize") {
            int newWidth, newHeight;
            std::cin >> newWidth >> newHeight;
            window.resize(newWidth, newHeight);
            std::cout << "New window size: " << window.getWidth() << "x" << window.getHeight() << std::endl;
        } else if (command == "display") {
            window.display(monitor);
            monitor.display();
        } else if (command == "close") {
            break;
        }
    }

    return 0;
}
