
#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

int main()
{
    int n{};

    cout << "Input vector size: ";
    cin >> n;

    vector<int> arr;
    arr.reserve(n);
    cout << "Input numbers: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr.push_back(arr[i]);
    }

    cout << "Input number to delete: ";
    cin >> n;
    for(int i = 0; i < arr.size(); i++)
    {
        for(int j = 0; j < arr.size(); j++)
        {
            if(arr[j] == n){
                // swap(arr[j], arr[arr.size() - 1]);
                // arr.pop_back();
                for(int k = ++j; k < arr.size(); k++)
                {
                    arr[k-1] = arr[k];
                }
                arr.pop_back();
            }
        }
    }


    for(auto el : arr)
    {
        cout << el << '\t';
    }
    cout << '\n';

}






