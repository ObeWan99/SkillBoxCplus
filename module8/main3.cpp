#include<math.h>
#include <iostream>
using namespace std;
int main()
{
    float X{};
    float Y{};
    float Z{};

    cout << "Введите размеры бруска X Y Z\n";
    cin >> X >> Y >> Z;

    float countCubs{};
    int setCubs {};

    if( X < 5.0 || Y < 5.0 || Z < 5.0)
        cout << "Нельзя изготовить из такого бруска кубик\n";

    Y /= 5;
    X /= 5;
    Z /= 5;

    cout << "Из этого бруска можно изготовить "<<static_cast<int>(Y) * static_cast<int>(X) * static_cast<int>(Z) << " кубиков\n";
    countCubs = static_cast<int>(Y) * static_cast<int>(X) * static_cast<int>(Z);

    int i{1};

    while(setCubs < countCubs){
       setCubs = i * i * i;
       i++;
    }

    if(setCubs > countCubs){
        i -= 2;
        setCubs = i * i * i;
    }

    cout << "Из них можно составить набор из " << setCubs << " кубиков\n";
    


    return 0;
}