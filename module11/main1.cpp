#include <iostream>
using namespace std;

string encrypt_caesar(string str, int pos)
{
    std::string result = "";
    for(char c : str)
    {
        if(c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
        {
            char base = isupper(c) ? 'A' : 'a';
            result += (c - base + pos + 26) % 26 + base; 
        } else{
            result += c;
        }
    }
    return result;
}

string decrypt_caesar(string str, int pos)
{

    return  encrypt_caesar(str, 26 - pos);;
}


int main()
{
    string str;
    getline(cin, str);
    int pos{10};
    cout << encrypt_caesar(str, pos);
    cout << endl;
    cout << decrypt_caesar(encrypt_caesar(str, pos), pos);
}



