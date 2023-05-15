#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "ru");
    
    cout << "Введите зарплату первого сотрудника: ";
    int ch1;
    cin >> ch1;

    cout << "Введите зарплату второго сотрудника: ";
    int ch2;
    cin >> ch2;
    cout << endl;

    cout << "Введите зарплату третьего сотрудника: ";
    int ch3;
    cin >> ch3;
    cout << "-----Считаем-----\n";
    
    if(ch1 <= 0 || ch2 <= 0 || ch3 <= 0){
        cout << "Зарплата нужно палтить всем \n";
    }  else if(ch1 > ch2 && ch1 > ch3){
        cout << "Самая высокая зарплата в отделе у 1 сотрудника : " << ch1 <<'\n';
            if(ch2 <= ch3)
                cout << "Разница между самой высокой и самой низкой зарплатой в отделе:" << ch1 - ch2 << '\n';
            else
                cout << "Разница между самой высокой и самой низкой зарплатой в отделе:" << ch1 - ch3 << '\n';
        cout << "Средня зп в отделе: " << static_cast<double>((ch1+ch2+ch3))/static_cast<double>(3) << '\n';
    } else if(ch2 > ch1 && ch2 > ch3){
        cout << "Самая высокая зарплата в отделе у 2 сотрудника : " << ch2 <<'\n';
            if(ch1 <= ch3)
                cout << "Разница между самой высокой и самой низкой зарплатой в отделе:" << ch2 - ch1 << '\n';
            else
                cout << "Разница между самой высокой и самой низкой зарплатой в отделе:" << ch2 - ch3 << '\n';
        cout << "Средня зп в отделе: " << static_cast<double>((ch1+ch2+ch3))/static_cast<double>(3) << '\n';
    }  else if(ch3 > ch1 && ch3 > ch2){
        cout << "Самая высокая зарплата в отделе у 3 сотрудника : " << ch3 <<'\n';
            if(ch2 <= ch1)
                cout << "Разница между самой высокой и самой низкой зарплатой в отделе:" << ch3 - ch2 << '\n';
            else
                cout << "Разница между самой высокой и самой низкой зарплатой в отделе:" << ch3 - ch1 << '\n';
        cout << "Средня зп в отделе: " << static_cast<double>((ch1+ch2+ch3))/static_cast<double>(3) << '\n';
    } else if(ch1 == ch2 && ch1== ch3){
        cout << "Зарплата одинаковая  : " << ch1 <<'\n';
        cout << "Разница в зп 0 рублей \n";
        cout << "Средня зп в отделе: " << static_cast<double>((ch1+ch2+ch3))/static_cast<double>(3) << '\n';
    }

   
    return 0;
}