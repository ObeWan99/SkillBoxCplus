#include <iostream>

using namespace std;

void functPtr(int* pArr){

    int temp[10]{};

    for(int i = 0; i < 10; i++)
    {
        temp[i] = pArr[9-i];
    }

    for(int i = 0; i < 10; i++)
    {
        pArr[i] = temp[i];
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    functPtr(arr);

     for(int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
}