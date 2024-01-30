#include <iostream>
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    
    int day{};
    cout << "Введите день(число): ";
    cin >> day;

    if((day >=1 && day <=5) || (day >= 8 && day <= 10) || day == 6 || day == 7 || day == 13 || day == 14 || day == 20 || day == 21 || day == 27 || day ==28){
        cout <<"Выходной\n";
    } else{
        cout << "рабчоий\n";
    }
    
    return 0;
}