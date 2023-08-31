#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> db(20);
    int n, i = 0;
    while (cin >> n && n != -1) {
        if (i < 20) {
            db[i++] = n;
        } else {
            for (int j = 1; j < 20; j++) {
                db[j - 1] = db[j];
            }
            db[19] = n;
        }
    }
    for (int j = 0; j < i; j++) {
        cout << db[j] << " ";
    }
    cout << endl;
    return 0;
}