#include <iostream>
#include <ctime>
#include <iomanip>
#include <chrono>
#include <thread>

int main() {
    int minutes, seconds;
    std::cout << "Введите количество минут и секунд для таймера: ";
    std::cin >> minutes >> seconds;

    // Вычисляем целевое время для остановки таймера
    std::time_t startTime = std::time(nullptr);
    std::time_t targetTime = startTime + minutes * 60 + seconds;

    while (std::time(nullptr) < targetTime) {
        int remainingTime = targetTime - std::time(nullptr);
        int remainingMinutes = remainingTime / 60;
        int remainingSeconds = remainingTime % 60;

        std::cout << std::setfill('0') << std::setw(2) << remainingMinutes << ":" << std::setfill('0') << std::setw(2) << remainingSeconds << std::endl;

        // Задержка для обновления времени
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    std::cout << "DING! DING! DING! Таймер завершен." << std::endl;

    return 0;
}