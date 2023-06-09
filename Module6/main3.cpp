#include <iostream>
#include <string>
using namespace std;

int main(){

    string name;
    cout << "Введите имя должника \n";
    cin >> name;

    int sum{};
    cout << "Введите сумму должника :\n";
    cin >> sum;
    if(sum <= 0){
        cout << "Долга нет илил сумма введена некорректно\n";
        return 0;
    }

    int repaymentAmount{};
    cout << "Введите суму погашения :\n";
    cin >> repaymentAmount;

    while(repaymentAmount < sum){
        sum = sum - repaymentAmount;
        cout << "Введите суму погашения :\n";
        cin >> repaymentAmount;
    }

     if (repaymentAmount > sum){
        cout << "Остаток " << repaymentAmount - sum <<'\n';
    } else if(repaymentAmount = sum){
        cout << "Долг погашен\n";
    }
    

    return 0;
}