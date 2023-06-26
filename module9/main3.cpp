#include <iostream>
#include <string>
using namespace std;

int main()
{
    string words{};
    cout << "Введите слова: ";
    getline(cin, words);

    int count{};

    for (int  i = 0; i < words.length(); i++){
        if(words[i] == ' ')
            count++;
    }
    
    cout << count;


    return 0;
}
