#include<iostream>
using namespace std;

int main()
{
    // int raws{};
    // cin >> raws;
    // int cols{};
    // cin >> cols;

    for(int i = 0; i < 15; ++i)
    {
        if (i == 7)
        {
            for(int j = 0; j < 15; ++j){
                cout << (j == 7 ? '+' : '-');
                if(j == 14)
                    cout << ">";
            }
            
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