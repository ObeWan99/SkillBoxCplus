#include <iostream>
#include <string>
using namespace std;

bool emailFirstPartDictionaryValidation (char c) {
    string dictionaryOfSymbols = "!#$%&'*+-/=?^_`{|}~";
    if (isalpha(c)) return true;
    else if (c == '-' || c == '.') return true;
    else {
        for (int i = 0; i < dictionaryOfSymbols.length(); ++i) {
            if (c == dictionaryOfSymbols[i]) return true;
        }
    }
    return false;
}
bool emailSecondPartDictionaryValidation (char c) {
    if (isalpha(c)) return true;
    else if (c == '-' || c == '.') return true;
    return false;
}



bool isValidEmail(string email) {

    bool correct = true;
    string firstPart, secondPart;
    int countAt{};
    int countDot{};
    for(char ch : email)
    {
        if(ch == '.')
        {
            countDot++;
        }
        if(ch == '@')
        {
            countAt++;
        }
    }
    if (countAt != 1) return false;
    //if (countDot != 3) return false;
    
    

    firstPart = email.substr(0, email.find('@'));
    secondPart = email.substr(email.find('@') + 1, email.length());
     //First part validation
     for (int i = 0; correct == true && i < firstPart.length(); ++i) {
         if (firstPart.length() < 1 || firstPart.length() > 64) correct = false;
         else if (!emailFirstPartDictionaryValidation(firstPart[i])) correct = false;
         else if (i > 0 && (firstPart[i] == '.' && firstPart[i - 1] == '.')) correct = false;
         else correct = true;
     }
     if (correct == false) return false;


    //Second part validation
    for (int i = 0; correct == true && i < secondPart.length(); ++i) {
        if (secondPart.length() < 1 || secondPart.length() > 63) correct = false;
        else if (!emailSecondPartDictionaryValidation(secondPart[i])) correct = false;
        else if (i > 0 && (secondPart[i] == '.' && secondPart[i - 1] == '.')) correct = false;
        else correct = true;
    }

    return correct;
}

int main() {
    string email;
    cin >> email;
    if (isValidEmail(email)) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
    return 0;
}