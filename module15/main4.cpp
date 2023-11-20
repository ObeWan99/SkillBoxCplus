// #include <iostream>
// #include <vector>
// #include <cstdlib>

// using namespace std;

// vector<int> setVec(vector<int>& vec){
//     for(int i = 0; i < vec.size(); i ++) {
//         cout << "Enter element " << i << ": ";
//         cin >> vec[i];
//     }
//     return vec;
// }

// vector<int> bubbleSort(vector<int>& vec)
// {
//     for(int i = 0; i < vec.size(); i++)
//     {
//         for(int j = 0; j < vec.size() - i - 1; j++)
//         {
            
//             if(abs(vec[j]) > abs(vec[j+1])) {
//                 int temp = vec[j];
//                 vec[j] = vec[j+1];
//                 vec[j+1] = temp;
//             }
//         }
//     }
//     return vec;
// }

// void printVec(vector<int>& vec)
// {
//     for(int i = 0; i < vec.size(); i++)
//     {
//         cout << vec[i] << " ";
//     }
// }


// int main(){
//     int size{};
//     cout << "Введите размер массива";
//     cin >> size;
    
//     vector<int> vec;
//     vec.resize(size);

//     setVec(vec);
//     bubbleSort(vec);
//     printVec(vec);


// }


#include <iostream>

int main() {
  int numbers[] = {-100, -72, -50, -5, -3, -2, -1, 15};
  int size = sizeof(numbers) / sizeof(numbers[0]);
  int min = 0;

  for (int idx = 1; idx < size; idx++)
    if (abs(numbers[idx]) < abs(numbers[min])) {
      min = idx;
    }

  int right = min + 1;
  int left = min - 1;
  if (size > 0)
    std::cout << numbers[min] << ", ";
  while (left >= 0 || right < size) {
    if (left >= 0 &&
        (abs(numbers[left]) <= abs(numbers[right]) || (right >= size))) {
      std::cout << numbers[left] << ", ";
      left--;
    }
    if (right < size &&
        (abs(numbers[right]) <= abs(numbers[left]) || (left < 0))) {
      std::cout << numbers[right] << ", ";
      right++;
    }
  }
  return 0;
}