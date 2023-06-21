#include <iostream>
using namespace std;
int main()
{
    float pointHealth{};
    float rezistMagick{};
    float powerFireBall{};

    cout << "Задайте очки здоровья и сопротивление к магии  от 0 до 1(включительно)\n";
    cin >> pointHealth >> rezistMagick;

    while (!(pointHealth <= 0))
    {
        cout << "Задайте мощность удара от 0 до 1\n";
        cin >> powerFireBall;

        if(powerFireBall < 0 || powerFireBall > 1) cout << "Введены некорректные данные\n";

        cout << "Урон " << powerFireBall << ", сопротиляемость " << rezistMagick << ", по орку будет нанесено " << powerFireBall*rezistMagick << " урона \n";
        pointHealth -= powerFireBall*rezistMagick;
        cout << "Здоровья осталось " << pointHealth << endl;
    }
    
    return 0;
}