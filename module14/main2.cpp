#include <iostream>

using namespace std;

const int BOARD_SIZE = 3;

void print_board(char board[][BOARD_SIZE]) {
    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

bool is_board_full(char board[][BOARD_SIZE]) {
    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            if (board[i][j] == ' ') {
                return false;
            }
        }
    }
    return true;
}

bool is_winner(char board[][BOARD_SIZE], char symbol) {
    // Check rows
    for (int i = 0; i < BOARD_SIZE; i++) {
        if (board[i][0] == symbol && board[i][1] == symbol && board[i][2] == symbol) {
            return true;
        }
    }
    // Check columns
    for (int j = 0; j < BOARD_SIZE; j++) {
        if (board[0][j] == symbol && board[1][j] == symbol && board[2][j] == symbol) {
            return true;
        }
    }
    return false;
}

int main() {
    char board[BOARD_SIZE][BOARD_SIZE] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    char player = 'X';

    while (true) {
        // Печать игрового поля
        print_board(board);

        // Предложить игроку ввести свой ход
        int row, col;
        cout << "Player " << player << ", enter your move (row column): ";
        cin >> row >> col;

        // Проверьте, не занята ли уже ячейка
        if (board[row][col] != ' ') {
            cout << "That cell is already occupied. Try again." << endl;
            continue;
        }

        // Пометить ячейку символом игрока
        board[row][col] = player;

        // Проверьте, закончилась ли игра
        if (is_winner(board, player)) {
            cout << "Player " << player << " wins!" << endl;
            break;
        } else if (is_board_full(board)) {
            cout << "It's a tie!" << endl;
            break;
        }

        // Switch to the other player
        player = (player == 'X') ? 'O' : 'X';
    }

    return 0;
}