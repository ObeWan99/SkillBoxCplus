#include <iostream>
using namespace std;

int main() {
    const int width = 15;
    const int height = 20;
    int x = width / 2;
    int y = height / 2;

    cout << "Положение марсохода: (" << x << ", " << y << ")" << endl;

    char direction;
    while (true) {
        cout << "Введите направление (W, S, A, D): ";
        cin >> direction;

        int new_x = x;
        int new_y = y;

        switch (direction) {
            case 'W':
                new_y--;
                break;
            case 'S':
                new_y++;
                break;
            case 'A':
                new_x--;
                break;
            case 'D':
                new_x++;
                break;
            default:
                cout << "Неверное направление" << endl;
                continue;
        }

        if (new_x < 0 || new_x >= width || new_y < 0 || new_y >= height) {
            cout << "Не могу двигаться в этом направлении" << endl;
        } else {
            x = new_x;
            y = new_y;
            cout << "Положение марсохода: (" << x << ", " << y << ")" << endl;
        }
    }

    return 0;
}