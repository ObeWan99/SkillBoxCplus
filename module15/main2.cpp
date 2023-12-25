#include <iostream>
#include <vector>
using namespace std;

int find_sum(vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            int sum = arr[i] + arr[j];
            if (sum == target) {
                cout << "The two numbers that sum up to " << target << " are: " << arr[i] << " and " << arr[j] << endl;
                exit(0);
            } else if (sum > target) {
                break;
            }
        }
    }
    cout << "No such numbers exist in the array." << endl;
    return 0;
}

int main() {
    vector<int> arr = {2, 7, 11, 15};
    int target = 17;

    find_sum(arr, target);

    return 0;
}