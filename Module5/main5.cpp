#include <iostream>
#include <string>
using namespace std;

int main(){

  int Ruble = 0;
  
  cout << "Введите количество денег: ";
  cin >> Ruble;
  
  if (Ruble % 10 == 0 || Ruble % 10 >= 5 || (Ruble / 10) % 10 == 1){
    cout << Ruble << " рублей";
    }else if (Ruble % 10 == 1){
    cout << Ruble << " рубль";
    }else {
    cout << Ruble << " рубля";
    }


    return 0;
}