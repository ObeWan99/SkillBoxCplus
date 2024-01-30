#include <fstream>
#include <iostream>


int main(){

    char buffer[20];
    std::ifstream bank;
    bank.open("bank.txt", std::ios::binary);
    
    bank.close();
}