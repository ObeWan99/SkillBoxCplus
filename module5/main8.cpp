#include <iostream>
 
using std::cout;
using std::cin;
using std::endl;
 
int main() 
{
  int day;
  int month;
  int year;
 
  cout << "Введите день месяц и год рождения клиента: ";
  cin >> day >> month >> year;
 
  int dayCurrent;
  int monthCurrent;
  int yearCurrent;
 
  cout << "Введите текущий день, месяц, год: ";
  cin >> dayCurrent >> monthCurrent >> yearCurrent;
 
  if(yearCurrent - year < 18){
    cout << "Нельзя продавать. ";
  }else if(yearCurrent - year > 18){
    cout << "Можно продать. ";
  }else if(monthCurrent > month || (monthCurrent == month && dayCurrent > day)){
    cout << "Можно продать. ";
  }else{
    cout << "Нельзя продавать. ";
  }
}