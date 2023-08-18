#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;
 


// проверяем, является ли заданная строка числовой строкой или нет
bool isNumber(const string &str)
{
    // перебираем строку, пока не найдем нецифровой символ
    for (char ch: str)
    {
        if (!isdigit(ch)) {
            return false;
        }
    }
 
    return true;
}

// Функция для разделения строки `str` с использованием заданного разделителя
vector<string> split(const string &str, char delim)
{
    auto i = 0;
    vector<string> list;
 
    auto pos = str.find(delim);
 
    while (pos != string::npos) //string::npos, если символ не найден
    {
        list.push_back(str.substr(i, pos - i));
        i = ++pos;
        pos = str.find(delim, pos);
    }
 
    list.push_back(str.substr(i, str.length()));
 
    return list;
}
 
// Функция для проверки IP-адреса
bool validateIP(string ip)
{
    // разбиваем строку на токены
    vector<string> list = split(ip, '.');
 
    // если размер токена не равен четырем
    if (list.size() != 4) {
        return false;
    }
 
    // проверка каждого токена
    for (string str: list)
    {
        // проверяем, является ли строка числом или нет, и числа
        // находятся в допустимом диапазоне
        if (!isNumber(str) || stoi(str) > 255 || stoi(str) < 0 || (str.size() > 1 && str[0] == '0')) {
            return false;
        }
    }
 
    return true;
}
 
// Проверка IP-адреса в C++
int main()
{
    string ip{};
    cout << "Enter your IP address: ";
    cin >> ip;

    if (validateIP(ip)) {
        cout << "Valid IP Address" << endl;
    }
    else {
        cout << "Invalid IP Address" << endl;
    }
 
    return 0;
}





