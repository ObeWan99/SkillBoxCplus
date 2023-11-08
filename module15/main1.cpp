#include <iostream>
#include <vector> 
using namespace std;

int binary_search(vector<int> vec, int n)
{
    int low = 0;
    int high = vec.size()-1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int guess = vec[mid];
        if(guess == n)
        {
           return mid;
        }
        else if( guess > n)
        {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    return 0;

}

int main()
{
  vector<int> vec = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
  int n{5};
  cout << binary_search(vec, n) << endl;

}