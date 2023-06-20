#include<iostream>
using namespace std;
int main(){
    int buckwheat{100};
    cout << "На начало посчета 100 кг гречки\n";
    for (int i = 1; i < 100; i++){
        buckwheat -= 4;
        cout << "После " << i << " месяца у вас в запасе останется " << buckwheat << " кг гречки\n";
        if(buckwheat <= 0){
            break;
        }
    }

    return 0;
}