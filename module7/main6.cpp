#include<iostream>
using namespace std;

int main()
{
    int signs{};
    int len{};
    cout << "Задайте длниу полоски: ";
    cin >> len;
    cout << "Задайте количество восклицательных знаков: ";
    cin >> signs;
    int correct{0};
    if(signs % 2 == 0)
        correct == 1;        
    for(int i = 0; i < len; i++){
        if(i >= len/2 - signs/2 && i <= len/2 + signs/2 - correct){
            cout << "!";
        } else{
            cout << "~";
        }
    }
    cout << endl;
}