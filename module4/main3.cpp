#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "ru");
    
    cout << "Введите 1-ое число ";
    int ch1;
    cin >> ch1;

    cout << endl;
    cout << "-----Проверяем-----\n";

    if(ch1 < 0){
        cout << "Число " << ch1 << " отрицательное\n";
    } else if (ch1 % 2 == 0){
        cout << "Число " << ch1 << " четное\n";
    } else{
        cout << "Число " << ch1 << " нечетное\n";
    }
    
    return 0;
}