// #include <iostream>
 
// using namespace std;

// int main() 
// {
//   int maydate{};
//   int weekday{};
  
//   cout << "Введите дату \n";
//   cin >> maydate;
  
//   cout << "Введите день недели \n";
//   cin >> weekday;
  
//   if (((maydate>=1) && (maydate<=5)) || ((maydate>=8) && (maydate<=10))){
//   cout << "Праздничный день";
//   }else if ((maydate+weekday)%6==0 || (maydate+weekday)%7==0){
//       cout << "Выходной день";
//   }else {
//       cout << "Рабочий день";
//   }
// }



#include <iostream>
using namespace std;

bool isHoliday(unsigned dayOfTheWeek, unsigned day)
{
  if ((day > 0 && day < 6) || (day > 7 && day < 11) || ((day + dayOfTheWeek - 2) % 7 > 4))
    return 1;
  return 0;
}

int main(){

  unsigned dayOfTheWeek{};
  unsigned day{};
  
  cout << "Введите дату \n";
  cin >> day;
  
  cout << "Введите день недели \n";
  cin >> dayOfTheWeek;

  cout<< isHoliday(dayOfTheWeek, day);
  cout << endl;

  return 0;
}