#include <iostream>
using namespace std;

int main()
{
    cout << "Введите день недели (от 1 до 7):";
    int day{0};
    cin >> day;

    if (day <= 0 || day > 7){
        cout << "дружище введи корректный день\n";
    } else if(day == 1){
        cout << "Меню сегодня (понедельник):\n";
    } else if (day ==2){
        cout << "Меню сегодня (вторник):\n";
    } else if(day ==3){
        cout << "Меню сегодня (среда):\n";
    } else if(day ==4){
        cout << "Меню сегодня (четверг):\n";
    } else if(day ==5){
        cout << "Меню сегодня (пятница):\n";
    } else if(day ==6){
        cout << "Меню сегодня (суббота):\n";
    } else{
        cout << "выходной\n";
    }
    return 0;
}