#include <iostream>
#include <string>
#include <vector>

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
    int notes[5]{0};
    vector<string> melody;
    melody.reserve(5);
    for(int i = 0; i < 5; i++){
        string accord;
        cin >> accord;
        melody.push_back(accord);
    }
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < melody[i].size(); j++){
            char a = melody[i][j];
            string b(1, a);
            int val = stoi(b);
            val--;
            notes[i] |= 1 << val;
        }
        if (notes[i] & DO) { std::cout << "DO "; }
        if (notes[i] & RE) { std::cout << "RE "; }
        if (notes[i] & MI) { std::cout << "MI "; }
        if (notes[i] & FA) { std::cout << "FA "; }
        if (notes[i] & SOL) { std::cout << "SOL "; }
        if (notes[i] & LA) { std::cout << "LA "; }
        if (notes[i] & SI) { std::cout << "SI "; }
        std::cout << std::endl;
    }
}