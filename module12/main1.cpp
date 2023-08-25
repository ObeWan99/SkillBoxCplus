#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name[5];
    for(int i = 0; i < 5; i++)
    {
        cout << "Введите имя жильца " << i + 1 << " : ";
        getline(cin, name[i]);
    }
    
    int apartmentNumbers[3];
    for (int i = 0; i < 3; i++) 
    {
        cout << "Введите номер кв: ";
        cin >> apartmentNumbers[i];
    }


    for (int i = 0; i < 3; i++) 
    {
        int apartmentNumber = apartmentNumbers[i];
        if (apartmentNumber >= 1 && apartmentNumber <= 10) {
            cout << "Фамилия квартиросъемщика в квартире " << apartmentNumber << ": " << name[apartmentNumber - 1] << endl;
        } else {
            cout << "Неверный номер квартиры!" << endl;
        }
    }
    return 0;
}

