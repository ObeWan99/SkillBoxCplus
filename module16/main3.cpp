#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(){
    string str;
    double a, b;
    char operation;

    cin >> str;
    stringstream stream(str);
    stream >> a >> operation >> b;

    switch (operation) {
        case '+':
            cout << a + b << endl;
            break;
        case '-':
            cout << a - b << endl;
            break;
        case '*':
            cout << a * b << endl;
            break;
        case '/':
            if (b == 0) {
                cout << "Error: division by zero" << endl;
            } else {
                cout << a / b << endl;
            }
            break;
        default:
            cout << "Error: invalid operator" << endl;
            break;
    }


}