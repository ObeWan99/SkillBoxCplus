#include <iostream>
#include <vector>

using namespace std;

void print_bubble_wrap(vector<vector<bool>> &wrap) {
    for (int i = 0; i < wrap.size(); i++) {
        for (int j = 0; j < wrap[i].size(); j++) {
            if (wrap[i][j]) {
                cout << "o ";
            } else {
                cout << "x ";
            }
        }
        cout << endl;
    }
}

void init_bubble_wrap(vector<vector<bool>> &wrap) {
    for (int i = 0; i < wrap.size(); i++) {
        for (int j = 0; j < wrap[i].size(); j++) {
            wrap[i][j] = true;
        }
    }
}

bool is_valid_coord(int coord, int max_coord) {
    return coord >= 0 && coord < max_coord;
}

void pop_bubbles(vector<vector<bool>> &wrap, int x1, int y1, int x2, int y2) {
    if (!is_valid_coord(x1, wrap.size()) || !is_valid_coord(y1, wrap[0].size()) ||
        !is_valid_coord(x2, wrap.size()) || !is_valid_coord(y2, wrap[0].size())) {
        cout << "Error: Invalid coordinates" << endl;
        return;
    }

    int start_x = min(x1, x2);
    int end_x = max(x1, x2);
    int start_y = min(y1, y2);
    int end_y = max(y1, y2);

    for (int i = start_x; i <= end_x; i++) {
        for (int j = start_y; j <= end_y; j++) {
            if (wrap[i][j]) {
                wrap[i][j] = false;
                cout << "Pop!" << endl;
            }
        }
    }
}

int main() {
    int n = 12;
    vector<vector<bool>> bubble_wrap(n, vector<bool>(n, true));

    init_bubble_wrap(bubble_wrap);
    print_bubble_wrap(bubble_wrap);

    int x1, y1, x2, y2;
    while (true) {
        cout << "Enter coordinates (x1 y1 x2 y2): ";
        cin >> x1 >> y1 >> x2 >> y2;
        pop_bubbles(bubble_wrap, x1, y1, x2, y2);
        print_bubble_wrap(bubble_wrap);

        bool all_popped = true;
        for (int i = 0; i < bubble_wrap.size(); i++) {
            for (int j = 0; j < bubble_wrap[i].size(); j++) {
                if (bubble_wrap[i][j]) {
                    all_popped = false;
                    break;
                }
            }
            if (!all_popped) {
                break;
            }
        }

        if (all_popped) {
            cout << "All bubbles popped!" << endl;
            break;
        }
    }

    return 0;
}
