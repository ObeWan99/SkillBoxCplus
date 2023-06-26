#include <iostream>
#include <string>
using namespace std;

bool isFloat(const string& str) {
    bool hasDigit = false;
    bool hasDot = false;
    bool hasMinus = false;

    for (int i = 0; i < str.size(); i++) {
        char c = str[i];
        if (c == '-' && i == 0) {
            hasMinus = true;
        } else if (c == '.' && !hasDot) {
            hasDot = true;
        } else if (isdigit(c)) {
            hasDigit = true;
        } else {
            return false;
        }
    }

    return hasDigit;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    if (isFloat(str)) {
        cout << "Yes" << std::endl;
    } else {
        cout << "No" << std::endl;
    }

    return 0;
}