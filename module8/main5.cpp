#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int km;
    cout << "Введите количество километров: ";
    cin >> km;

    int total_seconds = 0;
    for (int i = 1; i <= km; i++) {
        int seconds;
        cout << "Введите темп на километр " << i << " (в секундах): ";
        cin >> seconds;
        total_seconds += seconds;
    }

    int average_seconds = total_seconds / km;
    int minutes = average_seconds / 60;
    int seconds = average_seconds % 60;

    cout << "Средний темп: " << minutes << " минут " << seconds << " секунд" << endl;

    return 0;
}