#pragma once

// Объявление структуры для хранения координат
struct Point {
    double x;
    double y;
};

bool checkPoints(Point start, Point end);

// Функция для выполнения операции с помощью скальпеля
void scalpel(Point start, Point end);

// Функция для выполнения операции с помощью гемостата
void hemostat(Point point);

// Функция для выполнения операции с помощью пинцета
void tweezers(Point point);

// Функция для выполнения операции с помощью иглы
void suture(Point start, Point end);