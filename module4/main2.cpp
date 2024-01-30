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

    cout << "Введите их сумму ";
    int sum;
    cin >> sum;

    cout << endl;
    cout << "-----Проверяем-----\n";

    if(sum == ch1+ch2){
        cout << "верно!\n";
    } else{
        cout << "ошибка! верный результат: " << ch1+ch2 << '\n';
    }
    
    return 0;
}