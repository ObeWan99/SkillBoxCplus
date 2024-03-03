#include <iostream>
#include <fstream>
#include <string>

// Функция для валидации формата даты
bool validateDate(const std::string& date) {
    if (date.size() != 10) // Проверка длины строки
        return false;
    
    if (date[2] != '.' || date[5] != '.') // Проверка разделителей
        return false;

    // Дополнительные проверки могут быть добавлены для дня, месяца и года

    return true;
}

int main() {
    std::ofstream file("/home/alex/SkillBoxCplus/module19/main3.txt", std::ios_base::app); // Открытие файла для добавления данных

    if (!file.is_open()) {
        std::cerr << "Ошибка открытия файла!" << std::endl;
        return 1;
    }

    std::string name, surname, date;
    double amount;

    // Ввод данных от пользователя
    std::cout << "Введите имя и фамилию: ";
    std::cin >> name >> surname;

    std::cout << "Введите дату выдачи (ДД.ММ.ГГГГ): ";
    std::cin >> date;

    if (!validateDate(date)) {
        std::cerr << "Некорректный формат даты!" << std::endl;
        return 1;
    }

    std::cout << "Введите сумму выплаты в рублях: ";
    std::cin >> amount;

    // Запись данных в файл с новой строкой
    file << name << " " << surname << " " << date << " " << amount << "\n";

    file.close(); // Закрытие файла

    std::cout << "Данные успешно записаны в файл." << std::endl;

    return 0;
}