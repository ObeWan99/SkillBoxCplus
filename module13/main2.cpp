// #include<iostream>
// #include<vector>
// #include<string>

// using namespace std;

// int main()
// {
//     // Вектор цен
//     vector<float> prices {2.5, 4.25, 3.0, 10.0};

//     // Вектор покупок: {1, 1, 0, 3}, то есть два товара по индексу 1 и по одному — индексов 0 и 3.
//     vector<int> items {1, 1, 0, 3, 3};
//     float sum{};
//     for(int i = 0; i < items.size(); i++)
//     {
//         if(items[i] >= 0 && items[i] <= prices.size()-1)
//             sum += prices[items[i]];
//     }
//     cout << "Sum = " << sum << endl;
// }



#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "1name@192.168.4.5$223";
    int at_pos = str.find('@'); // find position of '@' character
    int dollar_pos = str.find('$'); // find position of '$' character
    string ip_address = str.substr(at_pos+1, dollar_pos-at_pos-1); // extract substring between '@' and '$'
    string number = str.substr(dollar_pos+1); // extract substring after '$'
    cout << "IP address: " << ip_address << endl;
    cout << "Number: " << number << endl;
    return 0;
}