// #include <iostream>
// #include <vector>
// #include <array>
// #include <algorithm>

// using namespace std;

// vector<int> bubbleSort(vector<int>& a)
// {
//     for(int i = 0; i < a.size(); i++)
//     {
//         for(int j = 0; j < a.size() - i - 1; j++)
//         {
//             if(a[j] > a[j+1]) {
//                 int temp = a[j];
//                 a[j] = a[j+1];
//                 a[j+1] = temp;
//             }
//         }
//     }
//     return a;
// }


// int main(){
//     int n{};
//     vector<int> a;
//     a.resize(5);
//     cout << "Введите число: ";
//     while (n != -2)
//     {
//         cin >> n;

//         if(n == -1) {
//             if(a.size() < 5) {
//                 cout << "Размер массива меньше 5" << "\n";
//             }
//             else {
//                 bubbleSort(a);
//                 for(int i  = 0; i < a.size(); i++)
//                     cout << a[i] << " ";
//                 cout << "\n";
//                 cout << "Пятое число по возрастанию " << a[4] << '\n';
//             }
//         }
//         else {
//             a.push_back(n);
//         }
//     }vtnjlf 
// }   
  

// int main(){
//     int n{};
//     std::array<int, 5> a;
//     cout << "Введите число: ";
//     while (n != -2)
//     {
//         cin >> n;

//         if(n == -1 && a.size() < 5) {
//             cout << "Размер массива меньше 5" << "\n";
//         }

//         else if(n == -1) {
//             bubbleSort(a);
            
//             else{
//                 //a.erase(a.begin() + 4);
//                 bubbleSort(a);
//                 for(int i  = 0; i < a.size(); i++)
//                     cout << a[i] << " ";
//                 cout << "\n";
//                 cout << "Пятое число по возрастанию " << a[4] << '\n';

//             }
//         }

//         else {
//             a.push_back(n);
//             for(auto& el : a){
//                 cout << el <<" ";
//             }
//             cout << endl;
//         }
//     }
// }  

#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main() {
    array<int, 5> numbers;
    int count = 0;

    while (true) {
        int input;
        cin >> input;

        if (input == -1) {
            if (count >= 5) {
                sort(numbers.begin(), numbers.end());
                cout << numbers[0];
            } else {
                cout << "Недостаточно чисел для вывода" << '\n' ;
            }
        } else if (input == -2) {
            break;
        } else {
            if (count < 5) {
                numbers[count] = input;
                count++;
            } else {
                auto it = max_element(numbers.begin(), numbers.end());
                if (input < *it) {
                    *it = input;
                }
            }
        }
    }

    return 0;
}