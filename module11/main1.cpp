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
    std::string result = "";
    
    for(char c : str)
    {
         if(isalpha(c)){
            if(c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
            {
                char base = isupper(c) ? 'A' : 'a';
                char ch2{};
                ch2 = c - base - pos;
                if( ch2)
                {
                    result += (c - base - pos) % 26 + base;
                }
                else{
                    result += 26 - (abs(ch2 - pos)) % 26 + base; 
                }
                
            }
         }
    }
    return result;
}


int main()
{
    string str;
    getline(cin, str);
    int pos{67};
    string encrypted = encrypt_caesar(str, pos);
    cout << encrypted;
    cout << endl;
    cout << decrypt_caesar(encrypted, pos);
}




