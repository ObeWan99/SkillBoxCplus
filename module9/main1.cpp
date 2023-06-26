#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    string time1, time2;
    cout << "Введите время отправления и время прибытия: ";
    getline(cin, time1);
    cout << "Введите время прибытия: ";
    getline(cin, time2);
    int departure_hour, departure_minute, arrival_hour, arrival_minute, travel_hour, travel_minute;

    departure_hour = stoi(time1.substr(0,2));
    departure_minute = stoi(time1.substr(3,2));
    arrival_hour = stoi(time2.substr(0,2));
    arrival_minute = stoi(time2.substr(3,2));

    if(departure_hour > arrival_hour)
        arrival_hour += 24;
    
    travel_hour = arrival_hour - departure_hour;
    travel_minute = arrival_minute - departure_minute;

     if (travel_minute < 0) {
        travel_minute += 60;
        travel_hour--;
    }

    cout << "Travel time: " << setfill('0') << setw(2) << travel_hour << ":" << setfill('0') << setw(2) << travel_minute << endl;

    return 0;
}