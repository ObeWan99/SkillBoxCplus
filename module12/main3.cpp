#include <iostream>
#include <cassert>
using namespace std;

float travelTime(float distance, float speed)
{
    assert(speed > 0 && speed != 0);
    float t = distance/speed;
    return t;
}

int main()
{
    float distance{};
    cout << "Введите расстояние :";
    cin >> distance;

    float speed{};
    cout << "Введите скорость :";
    cin >> speed;

    cout << travelTime(distance, speed) << '\n';
}