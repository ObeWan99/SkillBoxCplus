#include <iostream>
using namespace std;

int main(){
    // a-длина, b-ширина, с-высота
    int a, b, c;
    cout <<"Введите размер 1 коробки:";
    cin >> a >> b >> c;

    int m, n, k;
    cout <<"Введите размер 2 коробки:";
    cin >> m >> n >> k;

    if(a >= m && b >= m && c >= m){
        cout << "Коробка влезет\n";
    } else{
        cout << "Коробка не влезет\n";
    }

    
    return 0;
}