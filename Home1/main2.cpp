#include <iostream>
using namespace std;

void priceProduct()
{
  int descont{10};
  int price{0};
  int delivery{150};
  cout << "Введите стоимость товара \n";
  cin >>price;

  cout << "Полная стоимость товара равна = " << price + delivery - descont << '\n';
}
int main() {
  priceProduct();
  return 0;
}