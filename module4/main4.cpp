#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "ru");
    
    cout << "Введите число очков опыта: ";
    int lvlPoint;
    cin >> lvlPoint;

    cout << endl;
    cout << "-----Считаем-----\n";

    int startLvl{1};

    if(lvlPoint < 0){
        cout << "Очки опыта не могут быть отрицательными\n";
    } else if(lvlPoint >= 0 && lvlPoint < 1000){
        cout << "Ваш уровень: " << startLvl << '\n';
    } else if(lvlPoint >=1000 && lvlPoint < 2500){
        startLvl = 2;
        cout << "Ваш уровень: " << startLvl << '\n';
    } else if(lvlPoint >=2500 && lvlPoint <= 5000){
        startLvl = 3;
        cout << "Ваш уровень: " << startLvl << '\n';
    } else{
        cout << "Максимум 5000 очков \n";
    }

   
    
    return 0;
}