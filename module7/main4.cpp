#include<iostream>
using namespace std;

int main()
{
    int width, height;
    cin >> width >> height;
    for(int i = 0; i < height; i++)
    {
        cout << "|";
        if(i == 0 || i == height-1)
        {
            for(int j = 0; j < width; j++)
            {
                cout << "-";
            }
        } else{
            for(int j = 0; j < width; j++)
            {
                cout << " ";
            }
        }
        cout << "|";
        cout << endl;
    }

    return 0;
}