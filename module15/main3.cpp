#include <iostream>
#include <vector>

using namespace std;

vector<int> bubbleSort(vector<int>& a)
{
    for(int i = 0; i < a.size(); i++)
    {
        for(int j = 0; j < a.size() - i - 1; j++)
        {
            if(a[j] > a[j+1]) {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    return a;
}


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
//     }
// }   
  

int main(){
    int n{};
    vector<int> a;
    cout << "Введите число: ";
    while (n != -2)
    {
        cin >> n;

        if(n == -1 && a.size() < 5) {
            cout << "Размер массива меньше 5" << "\n";
        }

        else if(n == -1) {
            bubbleSort(a);
            if( a[5] > a[4]){
                cout << "err" << endl;
                a.pop_back();
            }
            else{
                a.erase(a.begin() + 4);
                bubbleSort(a);
                for(int i  = 0; i < a.size(); i++)
                    cout << a[i] << " ";
                cout << "\n";
                cout << "Пятое число по возрастанию " << a[4] << '\n';

            }
        }

        else {
            a.push_back(n);
            for(auto& el : a){
                cout << el <<" ";
            }
            cout << endl;
        }
    }
}  