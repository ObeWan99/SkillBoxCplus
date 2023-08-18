#include <iostream>
using namespace std;

string encrypt_caesar(string str, int pos)
{
    std::string result = "";
    for(char c : str)
    {
         if(isalpha(c)){
            if(c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
            {
                char base = isupper(c) ? 'A' : 'a';
                result += (c - base + pos) % 26 + base;
                 
            } else{
                result += c;
            }
         }
    }
    return result;
}

string decrypt_caesar(string str, int pos)
{
    
    return encrypt_caesar(str, 26 - pos % 26);
}


int main()
{
    string str;
    getline(cin, str);
    int pos{};
    cout << "Введите смещение" << '\n';
    cin >> pos;
    string encrypted = encrypt_caesar(str, pos);
    cout << encrypted;
    cout << endl;
    cout << decrypt_caesar(encrypted, pos);
}




