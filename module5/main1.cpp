#include <iostream>
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    
    int rubbingAlcohol{};
    cout << "Введите обём медицинского спирта у доктора: ";
    cin >> rubbingAlcohol;

    int countCampingPharmacy{};
    cout << "Введите количество наборов походных аптек у доктора: ";
    cin >> countCampingPharmacy;

    if(rubbingAlcohol >= 2000 || countCampingPharmacy >= 5){
        cout << "Да\n";
    } else{
        cout << "Нет\n";
    }

    return 0;
}