#include "instruments.h"
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Функция для проверки совпадения координат
bool checkPoints(Point start, Point end) {
    return (start.x == end.x && start.y == end.y);
}

// Функция для выполнения операции с помощью скальпеля
void scalpel(Point start, Point end) {
    cout << "Made a cut from (" << start.x << ", " << start.y << ") to (" << end.x << ", " << end.y << ")" << endl;
}

// Функция для выполнения операции с помощью гемостата
void hemostat(Point point) {
    cout << "Applied hemostat at (" << point.x << ", " << point.y << ")" << endl;
}

// Функция для выполнения операции с помощью пинцета
void tweezers(Point point) {
    cout << "Used tweezers at (" << point.x << ", " << point.y << ")" << endl;
}

// Функция для выполнения операции с помощью иглы
void suture(Point start, Point end) {
    cout << "Made a suture from (" << start.x << ", " << start.y << ") to (" << end.x << ", " << end.y << ")" << endl;
}

