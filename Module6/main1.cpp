#include <iostream>
#include <string>
using namespace std;

int main(){

  int numb{};
  cout << "Введите число\n";
  cin >> numb;
  int lastDig{0};
  bool found = false;
  while(numb != 0 && !found){
    found = numb % 10 > 1;
    numb /=10;
  }

  if(found){
    cout << "Число не только из 0 и 1\n";
  } else{
    cout << "Число только из 0 и 1\n";
  }
    return 0;
}