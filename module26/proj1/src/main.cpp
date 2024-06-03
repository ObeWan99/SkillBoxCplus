#include <iostream>
#include <ctime>
#include "track.h"
#include "audioPlayer.h"

int main() {
    AudioPlayer player;

    // Создание и добавление аудиозаписей
    std::tm creationDate1 = { 0, 0, 0, 1, 0, 124, 0, 0, 0 }; // 1 января 2024
    Track track1("Песня 1", creationDate1, 180);
    player.addTrack(track1);

    std::tm creationDate2 = { 0, 30, 3, 15, 4, 124, 0, 0, 0 }; // 15 мая 2024
    Track track2("Песня 2", creationDate2, 240);
    player.addTrack(track2);

    std::tm creationDate3 = { 0, 15, 2, 28, 2, 124, 0, 0, 0 }; // 28 февраля 2024
    Track track3("Песня 3", creationDate3, 120);
    player.addTrack(track3);

    // Взаимодействие с пользователем
    std::string command;
    while (command != "exit") {
        std::cout << "Введите команду (play, pause, next, stop, exit): ";
        std::cin >> command;

        if (command == "play") {
            std::string trackTitle;
            std::cout << "Введите название записи для воспроизведения: ";
            std::cin.ignore();
            std::getline(std::cin, trackTitle);
            player.play(trackTitle);
        } else if (command == "pause") {
            player.pause();
        } else if (command == "next") {
            player.next();
        } else if (command == "stop") {
            player.stop();
        } else if (command == "exit") {
            player.exit();
        } else {
            std::cout << "Неизвестная команда." << std::endl;
        }
    }

    return 0;
}
