#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

vector<int> setVec(vector<int>& vec){
    for(int i = 0; i < vec.size(); i ++) {
        cout << "Enter element " << i << ": ";
        cin >> vec[i];
    }
    return vec;
}

vector<int> bubbleSort(vector<int>& vec)
{
    for(int i = 0; i < vec.size(); i++)
    {
        for(int j = 0; j < vec.size() - i - 1; j++)
        {
            
            if(abs(vec[j]) > abs(vec[j+1])) {
                int temp = vec[j];
                vec[j] = vec[j+1];
                vec[j+1] = temp;
            }
        }
    }
    return vec;
}

void printVec(vector<int>& vec)
{
    for(int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
}


int main(){
    int size{};
    cout << "Введите размер массива";
    cin >> size;
    
    vector<int> vec;
    vec.resize(size);

    setVec(vec);
    bubbleSort(vec);
    printVec(vec);


}