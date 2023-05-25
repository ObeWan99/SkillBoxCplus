#include <iostream>
using namespace std;

int main(){
    int curYear{};
    int curMounth{};
    int curDate{};
    cout << "Введите текущий год, месяц и дату\n";
    cin >> curYear >> curMounth >> curDate;

    int Year{};
    int Mounth{};
    int Date{};
    cout << "Введите год рождения посетителя, месяц и дату\n";
    cin >> Year >> Mounth >> Date;

    if(curYear - Year == 18 && curMounth == Mounth && curDate == Date){
        cout << "Нельзя продавать в день 18-ти летия\n";
    } else if(curYear - Year == 18 && curMounth > Mounth){
        cout << "Можно продать\n";
    } else if(curYear - Year > 18){
        cout << "Можно продать\n";
    } else{
        cout << "Нельзя продать\n";
    }

    

    return 0;
}