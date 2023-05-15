#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "ru");
    
    cout << "Введите 1-ое число ";
    int ch1;
    cin >> ch1;

    cout << "Введите 2-ое число ";
    int ch2;
    cin >> ch2;
    cout << endl;
    cout << "-----Проверяем-----\n";

    if(ch2 == 0){
        cout << "На 0 делить нельзя\n";
    } else if(ch1%ch2 == 0){
        cout << "Да, " << ch1 << " делится на " << ch2 <<  " без остатка!\n";
    } else{
        cout << "Нет, ваш пример не делится без остатка\n";
    }
    
    return 0;
}