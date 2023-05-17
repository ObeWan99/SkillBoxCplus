#include <iostream>
 
using namespace std;

int main() 
{
  int maydate{};
  int weekday{};
  
  cout << "Введите дату \n";
  cin >> maydate;
  
  cout << "Введите день недели \n";
  cin >> weekday;
  
  if (((maydate>=1) && (maydate<=5)) || ((maydate>=8) && (maydate<=10))){
  cout << "Праздничный день";
  }else if ((maydate+weekday)%6==0 || (maydate+weekday)%7==0){
      cout << "Выходной день";
  }else {
      cout << "Рабочий день";
  }
}