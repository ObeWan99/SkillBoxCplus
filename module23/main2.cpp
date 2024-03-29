#include <iostream>

// Определение макросов для каждого сезона
#define SPRING 1
#define SUMMER 2
#define AUTUMN 3
#define WINTER 4

// Определение макроса для выбора сезона
#define SEASON WINTER

int main() {
    // Используем условные директивы прекомпиляции для вывода названия сезона
    #if SEASON == SPRING
        std::cout << "Весна" << std::endl;
    #elif SEASON == SUMMER
        std::cout << "Лето" << std::endl;
    #elif SEASON == AUTUMN
        std::cout << "Осень" << std::endl;
    #elif SEASON == WINTER
        std::cout << "Зима" << std::endl;
    #else
        std::cout << "Некорректный сезон" << std::endl;
    #endif

    return 0;
}
