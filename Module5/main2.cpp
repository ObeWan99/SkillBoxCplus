#include <iostream>
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    
    int airspeed{};
    cout << "Введите скорость самолёта: ";
    cin >> airspeed;

    int height{};
    cout << "Введите высоту: ";
    cin >> height;

    if(airspeed >= 750 && airspeed <= 850 && height >= 9000 && height <= 9500){
        cout << "Да\n";
    } else{
        cout << "Нет\n";
    }
    
    return 0;
}