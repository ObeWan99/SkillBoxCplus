
#include<iostream>
#include<vector>

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
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == n){
            swap(arr[i], arr[arr.size() - 1]);
            arr.pop_back();
        }
    }

    for(auto el : arr)
    {
        cout << el << '\t';
    }
    cout << '\n';

}






