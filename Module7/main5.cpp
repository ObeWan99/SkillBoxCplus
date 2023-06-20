#include<iostream>
using namespace std;

int main()
{
    for(int i = 0; i < 15; ++i)
    {
        if (i == 7)
        {
            for(int j = 0; j < 15; ++j)
                cout << (j == 7 ? '+' : '-');
            
        }
        else if(i == 0)
        {
            for (int j = 0; j < 15; j++)
                cout << (j == 7 ? '^' : ' ');
            
        }
        else 
        {
            for(int j = 0; j < 7; ++j) cout << ' ';
            cout << '|';
        }
        cout << "\n";
    }
}