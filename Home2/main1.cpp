#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    int amountOfMoney{};
    int ticketPrice{20};

    cout << "Прибываем на остановку «Улица программистов». В салоне пассажиров:";
    int passengers{};
    cin >> passengers;
    amountOfMoney = ticketPrice * passengers;
    cout << " Заработок " << amountOfMoney << '\n';
    
    
    int passengersOut{};
    cout << "Сколько пассажиров вышло на остановке?  ";
    cin >> passengersOut;
    cout << "Сколько пассажиров зашло на остановке?  ";
    int passengersIn{};
    cin >> passengersIn;
    amountOfMoney = amountOfMoney+(ticketPrice*passengersIn);
    cout << " Заработок " << amountOfMoney << '\n';
    
    passengers = passengers-passengersOut+passengersIn;
    cout << "Отправляемся с остановки «Улица программистов». В салоне пассажиров: " << passengers << '\n';
    cout << "----едем-----\n";
    cout << "Прибываем на остановку «Проспект алгоритмов». В салоне пассажиров: " << passengers << '\n';

    cout << "Сколько пассажиров вышло на остановке? ";
    cin >> passengersOut;
    cout << "Сколько пассажиров зашло на остановке?  ";
    cin >> passengersIn;
    amountOfMoney = amountOfMoney+(ticketPrice*passengersIn);
    cout << " Заработок " << amountOfMoney << '\n';
    passengers = passengers-passengersOut+passengersIn;
    cout << "Отправляемся с остановки «Проспект алгоритмов». В салоне пассажиров: " << passengers << '\n';
    cout << "----едем-----\n";

    cout << "Прибываем на остановку «Проспект неудачников». В салоне пассажиров: " << passengers << '\n';
    cout << "Сколько пассажиров вышло на остановке? ";
    cin >> passengersOut;
    cout << "Сколько пассажиров зашло на остановке?  ";
    cin >> passengersIn;
    amountOfMoney = amountOfMoney+(ticketPrice*passengersIn);
    cout << " Заработок " << amountOfMoney << '\n';
    passengers = passengers-passengersOut+passengersIn;
    cout << "Отправляемся с остановки «Проспект неудачников». В салоне пассажиров: " << passengers << '\n';
    cout << "----едем-----\n";

    cout << "Прибываем на остановку «Проспект Ленина - КОНЕЧНАЯ». В салоне пассажиров: " << passengers << '\n';
    cout << "Сколько пассажиров вышло на остановке? " << passengers << '\n';
    cout << " Всего заработали: " << amountOfMoney << " руб" <<'\n';
    

    cout << " Зарплата водителя: "  << amountOfMoney/4 <<" руб" <<'\n';
  
    cout << " Расходы на топливо: "  << amountOfMoney/5 <<" руб" <<'\n';
    
    cout << " Налоги: "  << amountOfMoney/5 <<" руб" <<'\n';
   
    cout << " Расходы на ремонт машины: "  << amountOfMoney/5 <<" руб" <<'\n';
   
    cout << " Итого доход: "  << amountOfMoney - (amountOfMoney/4) - (amountOfMoney/5) - (amountOfMoney/5) - (amountOfMoney/5) <<" руб" <<'\n';

    return 0;
}