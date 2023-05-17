#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    cout << "Приветствуем вас в калькуляторе квартплаты!" << '\n';
    int receiptAmount{};
    cout << "Введите сумму, указанную в квитанции: ";
    cin >> receiptAmount;

    cout << "Сколько подъездов в вашем доме? ";
    int numberOfEntrances{};
    cin >> numberOfEntrances;

    cout << "Сколько квартир в каждом подъезде? ";
    int numberOfApartments{};
    cin >> numberOfApartments;

    cout << endl;
    cout << "----Считаем-----\n";
    cout << "Каждая квартира должна платить по " << receiptAmount/numberOfEntrances/numberOfApartments << " руб\n";
    
 
}