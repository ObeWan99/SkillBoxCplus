#include <iostream>
#include <vector>

using namespace std;

int main() {
    int size;
    cout << "Enter the size of the vector: ";
    cin >> size;
    vector<int> a;
    //используется функция resize() для установки размера вектора в значение size
    a.resize(size);

    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i << ": ";
        cin >> a[i];
    }

    int max_sum = a[0], max_end = a[0], start = 0, end = 0;

    for (int i = 1; i < a.size(); i++) {
        if (a[i] > max_end + a[i]) {
            max_end = a[i];
            start = i;
        } else {
            max_end += a[i];
        }

        if (max_end > max_sum) {
            max_sum = max_end;
            end = i;
        }
    }

    cout << start << " " << end << endl;

    return 0;
}
