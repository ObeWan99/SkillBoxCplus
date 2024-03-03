#include <iostream>
#include <fstream>
#include <vector>
#include <string>

int main() {
    std::string fishToCatch;
    std::cout << "Какую рыбу вы собираетесь ловить? ";
    std::cin >> fishToCatch;

    std::ifstream riverFile("river.txt");
    std::ofstream basketFile("basket.txt", std::ios::app);
    
    if (!riverFile.is_open() || !basketFile.is_open()) {
        std::cerr << "Ошибка открытия файлов." << std::endl;
        return 1;
    }

    std::vector<std::string> fishTypes;
    std::string fish;
    
    while (riverFile >> fish) {
        fishTypes.push_back(fish);
    }

    int caughtFish = 0;
    
    for (const auto& f : fishTypes) {
        if (f == fishToCatch) {
            basketFile << f << std::endl;
            caughtFish++;
        }
    }

    riverFile.close();
    basketFile.close();

    std::cout << "Поймано рыб: " << caughtFish << std::endl;

    return 0;
}