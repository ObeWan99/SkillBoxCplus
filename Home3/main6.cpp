#include <iostream>
 
using namespace std;
 
int main() 
{
  int mansCount{};
  int barbersCount{};
  int mansPerBarber = 8; // один человек в час, смена 8 часов
  int mansPerBarberPerMonth = mansPerBarber * 30;    //подстрич за месяц
 
  cout << "Введите число мужчин в городе: ";
  cin >> mansCount;
  cout << "Сколько уже барберов удалось нанять?";
  cin >> barbersCount;
  cout << "Один барбер стрижет столько клиентов в месяц " << mansPerBarberPerMonth << "\n";
 
    // Сколько нужно барберов, чтобы постричь mansCount человек?
    int requiredBarbersCount = mansCount / mansPerBarberPerMonth;
    if (requiredBarbersCount * mansPerBarberPerMonth % mansCount) {
        requiredBarbersCount += 1;
    }
 
    cout << "Необходимое число барберов: " << requiredBarbersCount << "\n";
 
    // Сколько человек успеют посчтричь requiredBarbersCount за месяц?
    cout << requiredBarbersCount << " барбера(ов) могут постричь " << requiredBarbersCount * mansPerBarberPerMonth << " мужчин за месяц.\n";
 
  
  if (requiredBarbersCount > barbersCount) 
  {
    cout << "Нужно больше барберов!!!\n";
  } 
    else if (requiredBarbersCount == barbersCount) 
    {
      cout << "Барберов ровно столько, сколько нужно!!!\n";
    }   
      else 
      {
        cout << "Барберов хватает!!!\n";
      }
 
  if (barbersCount > requiredBarbersCount * 2) 
  {
    cout << "У вас работает в два раза больше барберов, чем это нужно!!!\n";
  }
 
  
}