#include <iostream>
#include <fstream>

bool isPNG(const std::string& filePath) {
    std::ifstream file(filePath, std::ios::binary);
    if (file) {
        char header[8];
        file.read(header, 8);
        return (header[0] == -119 && header[1] == 'P' && header[2] == 'N' && header[3] == 'G');
    }
    return false;
}

int main() {
    std::string filePath;
    std::cout << "Введите путь к файлу: ";
    std::cin >> filePath;
    if (isPNG(filePath)) {
        std::cout << "Данный файл является PNG-изображением" << std::endl;
    } else {
        std::cout << "Данный файл не является PNG-изображением" << std::endl;
    }
    return 0;
}
