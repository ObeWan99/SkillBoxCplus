#include <iostream>
#include <string>

using namespace std;

enum note 
{ 
    DO = 1, 
    RE = 2, 
    MI = 4, 
    FA = 8, 
    SOL = 16, 
    LA = 32, 
    SI = 64 
};

int main(){
    int melody[12] = {1, 5, 4, 2, 3, 6, 7, 1, 2, 3, 4, 5};

    for (int i = 0; i < 12; ++i) {
        if (melody[i] & DO) { std::cout << "DO "; }
        if (melody[i] & RE) { std::cout << "RE "; }
        if (melody[i] & MI) { std::cout << "MI "; }
        if (melody[i] & FA) { std::cout << "FA "; }
        if (melody[i] & SOL) { std::cout << "SOL "; }
        if (melody[i] & LA) { std::cout << "LA "; }
        if (melody[i] & SI) { std::cout << "SI "; }
        std::cout << std::endl;
    }
}