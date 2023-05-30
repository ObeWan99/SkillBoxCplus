// #include <iostream>
// using namespace std;

// int main(){

//     int a, b;
//     cout << "Введите координаты 1 точки: ";
//     cin >> a >>b;
//     int x, y;
//     cout << "Введите координаты 2 точки: ";
//     cin >> x >> y;
//     int m, n;
//     cout << "Введите координаты 3 точки: ";
//     cin >> m >> n;
    
//     if (a == x && b == y || x == m && y == n || a == m && b == n) cout << "No\n";
//     else if ((a-x)/(b-y) == (a-m)/(b-n) && (a-x)/(b-y) == (x-m)/(y-n)) cout << "No\n";
//     else cout << "Yes\n";
// }


#include <iostream>h>
 
using namespace std;
 
void checkTriangle(int x1, int y1, int x2,
                   int y2, int x3, int y3)
{
 
    int a = x1 * (y2 - y3)
            + x2 * (y3 - y1)
            + x3 * (y1 - y2);
 
    if (a == 0)
        cout << "No";
    else
        cout << "Yes";
}
 
int main()
{
    int x1 = 1, x2 = 1, x3 = 2,
        y1 = 1, y2 = 6, y3 = 5;
    checkTriangle(x1, y1, x2,
                  y2, x3, y3);
    
}