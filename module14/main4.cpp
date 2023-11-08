#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

int main(){
    srand(time(NULL));

    int size{4};
    vector<float> b;
    cout << "Введите значения вектора: " << endl; 
    for(int i = 0; i < size; i++)
    {
        float a;
        cin >> a;
        b.push_back(a);
    }

    float a [4][4];
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            a[i][j] = rand() % 6 + 1;
        }
    }

    vector<float> c;
    float sum{};
    for(int i = 0; i < size; i ++)
    {
        for(int j = 0; j < size; j++)
        {
            sum += a[i][j] * b[j]; 
        }
        c.push_back(sum);
        sum = 0;
    }

    for(auto& vecC : c)
    {
        cout << vecC << '\t';
    }
    

}
