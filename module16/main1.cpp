#include <iostream>
#include <cstdio>

int main() {
    float speed = 0.0;
    char speed_str[10];

    do {
        float delta;
        std::cout << "Speed delta: ";
        std::cin >> delta;

        speed += delta;
        if (speed < 0) {
            speed = 0;
        } else if (speed > 150) {
            speed = 150;
        }

        std::sprintf(speed_str, "%.1f", speed);
        std::cout << "Speed: " << speed_str << std::endl;
    } while (speed > 0.01);
    
    return 0;
}