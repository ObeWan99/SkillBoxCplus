#include <iostream>
#define bitRead(value, bit) (((value) >> (bit)) & 0x01)
#define bitSet(value, bit) ((value) |= (1UL << (bit)))
#define bitClear(value, bit) ((value) &= ~(1UL << (bit)))
#define bitWrite(value, bit, bitvalue) (bitvalue ? bitSet(value, bit) : bitClear(value, bit))
#define bit(b) (1UL << (b))
using namespace std;

void decimalToBinary(int n) {
    for (int i = 31; i >= 0; i--) {
        int k = n >> i;
        if (k & 1)
            cout << "1";
        else
            cout << "0";
    }
}

int main(){
    int myByte = 0b11000011;
    // ставим бит №3 разными способами
    // по сути - одно и то же
    myByte |= (1 << 3);
    //myByte = 0b11000011 | 0b00010000;
    //myByte=11010011
    myByte |= bit(3);
    // myBute=11010111
    bitSet(myByte,3);
    decimalToBinary(myByte);
    cout <<endl;
}