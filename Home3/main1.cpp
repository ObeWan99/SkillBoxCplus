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
    cout << "-----Проверяем----- \n";

    if (ch1 < ch2){
        cout << "наименьшее " << ch1 <<'\n';
    } else if(ch1 > ch2 ){
        cout << "наибольшее " << ch1 << '\n';
    } else {
        cout << "числа равны \n";
    }

    return 0;
}