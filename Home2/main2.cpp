#include <iostream>
using namespace std;

int main()
{
    int a{5};
    int b{10};
    cout << a << " " << b << '\n';
    int temp{a};
    a = b;
    b = temp;
    cout << a << " " << b << '\n';
    return 0;
}