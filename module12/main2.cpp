#include <iostream>
using namespace std;

int main()
{
    int size{};
    cin >> size;
    float array[size];
    for(int i = 0; i < size; i++)
    {
        cout << "введите " << i + 1 << "-ое дробное число : ";
        cin >> array[i];
    }

    for(int i = 0; i < size; i ++)
    {
        for(int j =0; j < size; j++)
        {
            if(array[i] > array[j])
            {
                swap(array[i], array[j]);
            }
        }  
    }

    for(int i = 0; i < size; i++)
    {
        cout << array[i] << '\t';
    }
    
}