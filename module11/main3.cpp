#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

bool isValidIP(string ip)
{
    int count{0};

    for(char c : ip)
    {
        if (c == '.'){
            count ++;
        }
        if (!isdigit(c)){
            return false;
        }
    }

    if(count != 3){
        return false;
    }

    string str;
    stringstream ss(ip);
    while (getline(ss, str, '.')){
        int num = stoi(str);
        if (num < 0 || num > 255 || (str.size() > 1 && str[0] == '0')) {
            return false;
        }   
    }
}


int main()
{
    string ip{};
    cout << "Enter your IP address: ";
    cin >> ip;


    if (isValidIP(ip)) {
        cout << "Valid" << endl;
    } else {
        cout << "Invalid" << endl;
    }

}





