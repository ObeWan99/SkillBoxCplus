#include <iostream>
#include <fstream>
#include <ctime>

void generateBinaryImage(int height, int width) {
    std::ofstream file("pic.txt");

    // Set the seed for random number generation based on current time
    std::srand(std::time(nullptr));

    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            int randomNum = std::rand() % 2; // Generate either 0 or 1 randomly
            file << randomNum << " ";
        }
        file << "\n"; // Move to the next line after each row
    }

    file.close();
}

int main() {
    int height, width;

    std::cout << "Enter the height of the image: ";
    std::cin >> height;
    std::cout << "Enter the width of the image: ";
    std::cin >> width;

    generateBinaryImage(height, width);

    return 0;
}