
#include <iostream>
using namespace std;

int main(){

  int time{};
  cout << "Введите который час:";
  cin >> time;
  if(time <= 0){
    cout << "Введите корректное время\n";
  } else{
      int count{0};
      while(count < time){
      cout << "КУ-КУ\n";
      count++;
      }
  }

  return 0;
}