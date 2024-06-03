#include "instruments.h"
#include <iostream>


using namespace std;

int main() {
    Point start, end;

    // Запрашиваем координаты начала разреза
    cout << "Enter the start point of the cut (x, y): ";
    cin >> start.x >> start.y;

    // Запрашиваем координаты конца разреза
    cout << "Enter the end point of the cut (x, y): ";
    cin >> end.x >> end.y;

    // Проверяем совпадение координат начала и конца
    if (!checkPoints(start, end)) {
        cout << "Invalid start and end points. Operation cannot be performed." << endl;
        return 1;
    }

    // Выполняем операцию с помощью скальпеля
    scalpel(start, end);

    // Запрашиваем координаты для гемостата
    cout << "Enter the point for hemostat (x, y): ";
    cin >> start.x >> start.y;
    hemostat(start);

    // Запрашиваем координаты для пинцета
    cout << "Enter the point for tweezers (x, y): ";
    cin >> start.x >> start.y;
    tweezers(start);

    // Запрашиваем координаты для иглы
    cout << "Enter the start point of the suture (x, y): ";
    cin >> start.x >> start.y;
    cout << "Enter the end point of the suture (x, y): ";
    cin >> end.x >> end.y;

    // Проверяем совпадение координат начала и конца
    if (!checkPoints(start, end)) {
        cout << "Invalid start and end points for suture. Operation cannot be performed." << endl;
        return 1;
    }

    // Выполняем операцию с помощью иглы
    suture(start, end);

    return 0;
}
