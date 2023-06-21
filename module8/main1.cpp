#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float m{};
    float F{};
    float t{};

    cout << "Введите массу корабля, силу тяги и время:\n";
    cin >> m >> F >> t;

    if(m <= 0 || F <= 0 || t <= 0) cout << "Введены некорректные данные\n";
    
    float a = F/m;
    float S = (a*pow(t,2))/2;

    cout << "На расстоянии " << S << " км окажется космичсекий корабль через " << t << " секунд\n";

    return 0;
}