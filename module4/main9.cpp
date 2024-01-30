#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "ru");

    cout << "Какой у вас доход? ";
    int income{0};
    cin >> income;

    if( income < 0){
        cout << "error\n";
    } else if(income < 10000){
        cout << "Ваш налог: " << income / 100 * 13 << '\n';
    } else if(income >= 10000 && income < 50000){
        cout << "Ваш налог: " << ((income - 10000) / 100 * 20) + (10000 / 100 * 13)  << '\n';
    } else {
        cout << "Ваш налог: " << ((income - 50000) / 100 * 30) + ((50000 - 10000) / 100 * 20) +  (10000 / 100 * 13) << '\n';
    }
   
    return 0;
}