#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
    int n;
    cout << "Input vector size: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Input numbers: ";
    for(int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    cout << "Input number to delete: ";
    cin >> n;
    for (auto it = arr.begin(); it != arr.end(); ) {
        if (*it == n) {
            it = arr.erase(it);
        } else {
            it++;
        }
    }
    for(auto & el : arr)
    {
        cout << el << " ";
    }
    cout << endl;


}