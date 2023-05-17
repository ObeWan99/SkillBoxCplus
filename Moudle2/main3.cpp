#include <iostream>
using namespace std;

void customerService()
{
  int shiftLength{0};
  cout << "Введите длительность смены в минутах: \n";
  cin >>shiftLength;

  int time{0};
  cout << "Сколько минут клиент делает заказ? \n";
  cin >>time;
  
  int collectionTime{0};
  cout << "Сколько минут кассир собирает заказ? \n";
  cin >>collectionTime;
  cout << "-----Считаем----- \n";
  cout << "За смену длиной " << shiftLength << " минут кассир успеет обслужить " << shiftLength / (time + collectionTime) << " клиентов. \n";
}
int main() {
  customerService();
  return 0;
}