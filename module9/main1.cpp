#include <iostream>
#include <string>
#include <iomanip>
#include <regex>
using namespace std;


bool isValidTime(string time) {
    regex pattern("([01]?[0-9]|2[0-3]):[0-5][0-9]");
    return regex_match(time, pattern);
}

int main()
{
    string time1, time2;
    cout << "Введите время отправления: ";
    do {
        cout << "Enter departure time (HH:MM): ";
        cin >> time1;
    } while (!isValidTime(time1));
    cout << "Введите время прибытия: ";
    do {
        cout << "Enter arrival time (HH:MM): ";
        cin >> time2;
    } while (!isValidTime(time2));
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