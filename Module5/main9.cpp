#include <iostream>
using namespace std;

int main(){

    int a, b;
    cout << "Введите координаты 1 точки: ";
    cin >> a >>b;
    int x, y;
    cout << "Введите координаты 2 точки: ";
    cin >> x >> y;
    int m, n;
    cout << "Введите координаты 3 точки: ";
    cin >> m >> n;
    
    if (a == x && b == y || x == m && y == n || a == m && b == n) cout << "No\n";
    else if ((a-x)/(b-y) == (a-m)/(b-n) && (a-x)/(b-y) == (x-m)/(y-n)) cout << "No\n";
    else cout << "Yes\n";
}