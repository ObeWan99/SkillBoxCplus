
#include <iostream>
#include <cstring>
using namespace std;

bool isValidEmail(string email) {
    int atIndex = email.find('@');
    int dotIndex = email.find('.');

    // Check if '@' and '.' are present
    if (atIndex == string::npos || dotIndex == string::npos) {
        return false;
    }

    // Check if '@' is not the first or last character
    if (atIndex == 0 || atIndex == email.length() - 1) {
        return false;
    }

    // Check if '.' is not the first or last character
    if (dotIndex == 0 || dotIndex == email.length() - 1) {
        return false;
    }

    // Check if '.' is not immediately after '@'
    if (dotIndex - atIndex == 1) {
        return false;
    }

    // Check if there are consecutive dots
    if (email.find("..") != string::npos) {
        return false;
    }

    // Check if the first part of the email is valid
    string firstPart = email.substr(0, atIndex);
    for (char c : firstPart) {
        if (!isalnum(c) && c != '-' && c != '!' && c != '#' && c != '$' && c != '%' && c != '&' && c != '\'' && c != '*' && c != '+' && c != '-' && c != '/' && c != '=' && c != '?' && c != '^' && c != '_' && c != '`' && c != '{' && c != '|' && c != '}' && c != '~') {
            return false;
        }
    }

    // Check if the second part of the email is valid
    string secondPart = email.substr(atIndex + 1);
    for (char c : secondPart) {
        if (!isalnum(c) && c != '.') {
            return false;
        }
    }

    return true;
}

int main() {
    string email;
    cout << "Enter your email address: ";
    cin >> email;

    if (isValidEmail(email)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}