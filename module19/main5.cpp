#include <iostream>
#include <fstream>
#include <string>
#include <vector>

// Структура для хранения информации о секторе
struct Sector {
    std::string question;
    std::string answer;
    bool played = false;
};

int main() {
    // Загрузка вопросов и ответов из файлов
    std::vector<Sector> sectors;
    for (int i = 1; i <= 13; ++i) {
        std::ifstream questionFile("question" + std::to_string(i) + ".txt");
        std::ifstream answerFile("answer" + std::to_string(i) + ".txt");
        if (questionFile.is_open() && answerFile.is_open()) {
            Sector s;
            std::getline(questionFile, s.question);
            std::getline(answerFile, s.answer);
            sectors.push_back(s);
            questionFile.close();
            answerFile.close();
        } else {
            // Обработка ошибки открытия файлов
            std::cerr << "Error: Unable to open question" + std::to_string(i) + ".txt or answer" + std::to_string(i) + ".txt" << std::endl;
            return 1;
        }
    }

    // Логика игры
    int activeSector = 0;
    int playerScore = 0;
    int audienceScore = 0;
    while (playerScore < 6 && audienceScore < 6) {
        // Ход игрока
        activeSector = (activeSector + 1) % 13;
        while (sectors[activeSector].played) {
            activeSector = (activeSector + 1) % 13;
        }
        sectors[activeSector].played = true;

        // Показ вопроса
        std::cout << "Question: " << sectors[activeSector].question << std::endl;

        // Ввод ответа игроком
        std::string playerAnswer;
        std::cout << "Your answer: ";
        std::cin >> playerAnswer;

        // Проверка ответа и начисление баллов
        if (playerAnswer == sectors[activeSector].answer) {
            playerScore++;
        } else {
            audienceScore++;
        }
    }

    // Определение победителя
    if (playerScore >= 6) {
        std::cout << "Congratulations! You win!" << std::endl;
    } else {
        std::cout << "Audience wins! Better luck next time!" << std::endl;
    }

    return 0;
}
