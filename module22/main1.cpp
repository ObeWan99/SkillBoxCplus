#include <iostream>
#include <string>
#include <map>
#include <vector>

// Функция для добавления абонента в справочник
void addContact(std::map<std::string, std::string>& numberToSurname, std::map<std::string, std::vector<std::string>>& surnameToNumber, const std::string& phoneNumber, const std::string& lastName) {
    // создаём пару телефон : имя
    numberToSurname[phoneNumber] = lastName;
    surnameToNumber[lastName].push_back(phoneNumber);
}

// Функция для поиска фамилии по номеру телефона
std::string findLastNameByNumber(const std::map<std::string, std::string>& numberToSurname, const std::string& phoneNumber) {
    if (numberToSurname.count(phoneNumber) > 0) {
        return numberToSurname.at(phoneNumber);
    }
    return "Фамилия не найдена";
}

// Функция для поиска номера(ов) по фамилии
std::string findNumbersByLastName(const std::map<std::string, std::vector<std::string>>& surnameToNumber, const std::string& lastName) {
    if (surnameToNumber.count(lastName) > 0) {
        std::string numbers;
        for (const auto& number : surnameToNumber.at(lastName)) {
            numbers += number + " ";
        }
        return numbers;
    }
    return "Номера не найдены";
}

int main() {
    std::map<std::string, std::string> numberToSurname;
    std::map<std::string, std::vector<std::string>> surnameToNumber;

    // Пример запросов
    addContact(numberToSurname, surnameToNumber, "69-70-30", "Ivanov");
    addContact(numberToSurname, surnameToNumber, "69-70-31", "Petrov");
    addContact(numberToSurname, surnameToNumber, "69-70-30", "Ivanov");

    std::cout << findLastNameByNumber(numberToSurname, "69-70-30") << std::endl; // Выводит "Ivanov"
    std::cout << findNumbersByLastName(surnameToNumber, "Ivanov") << std::endl; // Выводит "69-70-30 "

    return 0;
}
