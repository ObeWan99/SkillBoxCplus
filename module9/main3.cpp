#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    getline(cin, input);

    int wordCount = 0;
    bool inWord = false; 

    for (char c : input) {
        if (c != ' ') {
            if (!inWord) { 
                inWord = true;
                wordCount++;
            }
        } else { 
            inWord = false; 
        }
    }

    cout << "Number of words: " << wordCount << endl;
    return 0;
}
