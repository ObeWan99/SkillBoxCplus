#include <iostream>
#include <map>
#include <string>

bool areAnagrams(const std::string& str1, const std::string& str2) {
    // Если строки разной длины, они не могут быть анаграммами
    if (str1.length() != str2.length()) {
        return false;
    }

    std::map<char, int> charCountMap1;
    std::map<char, int> charCountMap2;

    // Подсчитываем количество каждой буквы в первой строке
    for (char c : str1) {
        charCountMap1[c]++;
    }

    // Подсчитываем количество каждой буквы во второй строке
    for (char c : str2) {
        charCountMap2[c]++;
    }

    // Сравниваем карты символов
    return charCountMap1 == charCountMap2;
}

int main() {
    std::string str1, str2;
    std::cout << "Введите первую строку: ";
    std::cin >> str1;
    std::cout << "Введите вторую строку: ";
    std::cin >> str2;

    if (areAnagrams(str1, str2)) {
        std::cout << "Строки являются анаграммами друг друга." << std::endl;
    } else {
        std::cout << "Строки не являются анаграммами друг друга." << std::endl;
    }

    return 0;
}