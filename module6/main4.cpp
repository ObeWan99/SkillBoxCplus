#include <iostream>
using namespace std;

int main()
{
    int numberTicket{};
    cout << "Введите номер билета 6-ти значный ";
    cin >> numberTicket;
    int counter{0};
    int sum_1{0};
    int sum_2{0};
    while (counter < 3)
    {
        int lastDigital = numberTicket % 10;
        sum_1 += lastDigital;
        numberTicket /= 10;
        counter++;
    }

    while (counter < 6)
    {
        int lastDigital = numberTicket % 10;
        sum_2 += lastDigital;
        numberTicket /= 10;
        counter++;
    }
    
   if(sum_1 == sum_2){
    cout << "Счастливый билетик\n";
   } else{
    cout << "Не счастливый\n";
   }

    return 0;
}