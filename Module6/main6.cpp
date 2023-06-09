#include <iostream>
using namespace std;

int main(){
    int X{0};
    cout << "Введите размер вклада ";
    cin >> X;

    int Y{0};
    cout << "Введите процентную ставку ";
    cin >> Y;

    int P{0};
    cout << "Введите желаемую сумму ";
    cin >> P;

    int counter{0};
    while(X <= P){
        int proc = static_cast<float>(X) / 100 * Y;
        X = X + proc;
        counter ++;
    }
    cout << "Придётся подождать " << counter << " лет\n";

    return 0;
}