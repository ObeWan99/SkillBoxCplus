#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
    // Вектор цен
    vector<float> prices {2.5, 4.25, 3.0, 10.0};

    // Вектор покупок: {1, 1, 0, 3}, то есть два товара по индексу 1 и по одному — индексов 0 и 3.
    vector<int> items {1, 1, 0, 3, 3};
    float sum{};
    for(int i = 0; i < items.size(); i++)
    {
        if(items[i] >= 0 && items[i] <= prices.size()-1)
            sum += prices[items[i]];
    }
    cout << "Sum = " << sum << endl;
}