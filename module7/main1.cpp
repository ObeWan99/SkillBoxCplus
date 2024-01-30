
#include <iostream>
using namespace std;

int main() {
    int total_groats = 100; // начальное количество гречки
    int groats_per_month = 4; // количество гречки, которое уходит в месяц
    int months = 0; // количество месяцев, через которое закончится гречка

    while (total_groats > 0) {
        months++;
        total_groats -= groats_per_month;
        if (total_groats < 0) {
            total_groats = 0;
        }
        cout << "Через " << months << " месяцев у вас останется " << total_groats << " кг гречки" << endl;
    }

    return 0;
}