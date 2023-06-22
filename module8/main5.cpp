#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int km{};
    cout << "Привет! Сэм! Сколько км ты сегодня пробежал? ";
    cin >> km;
    int count{1};
    int time{};
    float middleValue{};
    while (count <= km)
    {
        cout << "Какой у тебя был темп на " << count << " кругу ";
        cin >> time;
        count ++;
        middleValue +=time;
    }
    middleValue /= count;
    middleValue = static_cast<float>(middleValue)/60;

    float intpart, fractpart;

    fractpart = modf(middleValue, &intpart);
    
    cout << "Твой средний темп за тренировку:" << intpart << " мин " << fractpart << " сек\n";

      
    
       
    return 0;
}