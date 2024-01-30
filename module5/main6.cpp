// #include <iostream>
// using namespace std;

// int main(){
//     // a-длина, b-ширина, с-высота
//     int a, b, c;
//     cout <<"Введите размер 1 коробки:";
//     cin >> a >> b >> c;

//     int m, n, k;
//     cout <<"Введите размер 2 коробки:";
//     cin >> m >> n >> k;

//     if(a >= m && b >= m && c >= m){
//         cout << "Коробка влезет\n";
//     } else{
//         cout << "Коробка не влезет\n";
//     }

    
//     return 0;
// }


#include <iostream>
 
using namespace std;
 
int main() 
{
  int a;
  int b;
  int c;
  
  cout << "Введите размеры первой коробки(которую надо пеместить в другую): ";
  cin >> a >> b >> c;
 
  int m;
  int n;
  int k;
  
  cout << "Введите размеры второй коробки(в которую надо засунуть): ";
  cin >> m >> n >> k;
 
  if (a <= m && b <= n && c <= k || a <= n && b <= m && c <= k) {
    cout << "Можно";
    }else if(a <= n && b <= m && c <= k || a <= m && b <= n && c <= k){
    cout << "Можно";
    }else if(c <= a && a <= c && k <= b || k <= c && n <= b && k <= a){
    cout << "Можно";
  } else {
    cout << "Нельзя";
  }
  
}