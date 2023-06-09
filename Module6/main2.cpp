// #include <iostream>
// using namespace std;

// int main(){

//     int ch{};
//     cout << "Введите число :";
//     cin >> ch;

//     int count{1};

//     while(count <= ch){
//         int lastDigit = ch % 10;
//         ch = ch / 10;
//         count++;
//     }

//     cout << count;

//     return 0;
// }

#include <iostream>
#include <string>

using namespace std;

int main() {
  int num{};
  cout << "Введите число :\n";
  cin >> num;
  if (num < 0){
    string str = to_string(num);
    int num_digits = str.length();
    cout << num_digits - 1<< endl;
  } else {
        string str = to_string(num);
        int num_digits = str.length();
        cout << num_digits << endl;

  }

  return 0;
}

