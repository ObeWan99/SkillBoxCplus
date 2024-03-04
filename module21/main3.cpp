#include <iostream>
#include <cmath>
#include <string>
#include <locale>
#include <map>

struct MathVector {
  double coordinateX;
  double coordinateY;
};

enum Command { CMD_ADD, CMD_SUBTRACT, CMD_SCALE, CMD_LENGHT, CMD_NORMALIZE, CMD_UNKNOWN };

std::map<std::string, Command> commandMap = {
    {"add", CMD_ADD},
    {"subtract", CMD_SUBTRACT},
    {"scale", CMD_SCALE},
    {"length", CMD_LENGHT},
    {"normalize", CMD_NORMALIZE}
};

void printVec(MathVector firstVec){
    std::cout << "Результат: "<< firstVec.coordinateX << " " << firstVec.coordinateY << std::endl;
}

void vectorAdd(MathVector firstVec) {
    MathVector secondVec;
    std::cout << "Введите координаты второго вектора: ";
    std::cin >> secondVec.coordinateX >> secondVec.coordinateY;

    firstVec.coordinateX += secondVec.coordinateX;
    firstVec.coordinateY += secondVec.coordinateY;
    printVec(firstVec);
}

void vectorSubtract(MathVector firstVec) {
    MathVector secondVec;
    std::cout << "Введите координаты второго вектора: ";
    std::cin >> secondVec.coordinateX >> secondVec.coordinateY;

    firstVec.coordinateX -= secondVec.coordinateX;
    firstVec.coordinateY -= secondVec.coordinateY;
    printVec(firstVec);
}

void vectorScale(MathVector firstVec) {
    double multiplier;
    std::cout << "Enter multiplier value: ";
    std::cin >> multiplier;

    firstVec.coordinateX *= multiplier;
    firstVec.coordinateY *= multiplier;
    printVec(firstVec);
}

double vectorLength(MathVector firstVec) {
  return sqrt(firstVec.coordinateX * firstVec.coordinateX + firstVec.coordinateY * firstVec.coordinateY);
}

void vectorNormalize(MathVector firstVec) {
  double inv_length = 1/vectorLength(firstVec);
  firstVec.coordinateX *= inv_length;
  firstVec.coordinateY *= inv_length;
  printVec(firstVec);
}

int main(){

    MathVector firstVec;
    std::cout << "Введие координаты первого вектора: ";
    std::cin >> firstVec.coordinateX >> firstVec.coordinateY;

    std::string command;
    std::cout << "Введите команду: ";
    std::cin >> command;

    Command cmd = commandMap.count(command) ? commandMap[command] : CMD_UNKNOWN;

    switch (cmd)
    {
    case CMD_ADD:
        vectorAdd(firstVec);
        break;
    case CMD_SUBTRACT:
        vectorSubtract(firstVec);
        break;
    case CMD_SCALE:
        vectorScale(firstVec);
        break;
    case CMD_LENGHT:
        std::cout << "Длина вектора " << vectorLength(firstVec) << std::endl;
        break;
    case CMD_NORMALIZE:
        vectorNormalize(firstVec);
        break;
    default:
        break;
    }
}
