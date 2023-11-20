#include <iostream>
#include <string>

using namespace std;

int main(){
    string integerPart, fractionalPart;
    cin >> integerPart >> fractionalPart;
    double result = stod(integerPart + "." + fractionalPart);
    cout << "The combined number is: " << result << endl;
}