#include <iostream>
#include <string>

using namespace std;


char check_row(string row) {
    if (row == "XXX") {
        return 'X';
    } else if (row == "OOO") {
        return 'O';
    } else {
        return '.';
    }
}


char check_column(string board[3], int col) {
    string column = "";
    for (int i = 0; i < 3; i++) {
        column += board[i][col];
    }
    return check_row(column);
}


char check_diagonal(string board[3], bool main_diagonal) {
    string diagonal = "";
    if (main_diagonal) {
        diagonal = board[0][0] + board[1][1] + board[2][2];
    } else {
        diagonal = board[0][2] + board[1][1] + board[2][0];
    }
    return check_row(diagonal);
}


bool is_valid(string board[3]) {
    int num_x = 0;
    int num_o = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == 'X') {
                num_x++;
            } else if (board[i][j] == 'O') {
                num_o++;
            } else if (board[i][j] != '.') {
                return false;
            }
        }
    }
    if (num_x > num_o + 1 || num_o > num_x + 1) {
        return false;
    }
    return true;
}

int main() {
    string board[3];
    for (int i = 0; i < 3; i++) {
        cin >> board[i];
    }

    if (!is_valid(board)) {
        cout << "Incorrect" << endl;
        return 0;
    }

    char winner = '.';
    for (int i = 0; i < 3; i++) {
        char row_winner = check_row(board[i]);
        if (row_winner != '.') {
            if (winner == '.') {
                winner = row_winner;
            } else {
                cout << "Incorrect" << endl;
                return 0;
            }
        }
        char col_winner = check_column(board, i);
        if (col_winner != '.') {
            if (winner == '.') {
                winner = col_winner;
            } else {
                cout << "Incorrect" << endl;
                return 0;
            }
        }
    }
    char main_diag_winner = check_diagonal(board, true);
    if (main_diag_winner != '.') {
        if (winner == '.') {
            winner = main_diag_winner;
        } else {
            cout << "Incorrect" << endl;
            return 0;
        }
    }
    char anti_diag_winner = check_diagonal(board, false);
    if (anti_diag_winner != '.') {
        if (winner == '.') {
            winner = anti_diag_winner;
        } else {
            cout << "Incorrect" << endl;
            return 0;
        }
    }

    if (winner == '.') {
        cout << "Nobody" << endl;
    } else if (winner == 'X') {
        cout << "Petya won" << endl;
    } else {
        cout << "Vanya won" << endl;
    }

    return 0;
}