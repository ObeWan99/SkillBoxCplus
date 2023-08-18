// #include <iostream>
// #include <string>

// using namespace std;


// char check_row(string row) {
//     if (row == "XXX") {
//         return 'X';
//     } else if (row == "OOO") {
//         return 'O';
//     } else {
//         return '.';
//     }
// }


// char check_column(string board[3], int col) {
//     string column = "";
//     for (int i = 0; i < 3; i++) {
//         column += board[i][col];
//     }
//     return check_row(column);
// }


// char check_diagonal(string board[3], bool main_diagonal) {
//     string diagonal = "";
//     if (main_diagonal) {
//         diagonal = board[0][0] + board[1][1] + board[2][2];
//     } else {
//         diagonal = board[0][2] + board[1][1] + board[2][0];
//     }
//     return check_row(diagonal);
// }


// bool is_valid(string board[3]) {
//     int num_x = 0;
//     int num_o = 0;
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             if (board[i][j] == 'X') {
//                 num_x++;
//             } else if (board[i][j] == 'O') {
//                 num_o++;
//             } else if (board[i][j] != '.') {
//                 return false;
//             }
//         }
//     }
//     if (num_x > num_o + 1 || num_o > num_x + 1) {
//         return false;
//     }
//     return true;
// }

// int main() {
//     string board[3];
//     for (int i = 0; i < 3; i++) {
//         cin >> board[i];
//     }

//     if (!is_valid(board)) {
//         cout << "Incorrect" << endl;
//         return 0;
//     }

//     char winner = '.';
//     for (int i = 0; i < 3; i++) {
//         char row_winner = check_row(board[i]);
//         if (row_winner != '.') {
//             if (winner == '.') {
//                 winner = row_winner;
//             } else {
//                 cout << "Incorrect" << endl;
//                 return 0;
//             }
//         }
//         char col_winner = check_column(board, i);
//         if (col_winner != '.') {
//             if (winner == '.') {
//                 winner = col_winner;
//             } else {
//                 cout << "Incorrect" << endl;
//                 return 0;
//             }
//         }
//     }
//     char main_diag_winner = check_diagonal(board, true);
//     if (main_diag_winner != '.') {
//         if (winner == '.') {
//             winner = main_diag_winner;
//         } else {
//             cout << "Incorrect" << endl;
//             return 0;
//         }
//     }
//     char anti_diag_winner = check_diagonal(board, false);
//     if (anti_diag_winner != '.') {
//         if (winner == '.') {
//             winner = anti_diag_winner;
//         } else {
//             cout << "Incorrect" << endl;
//             return 0;
//         }
//     }

//     if (winner == '.') {
//         cout << "Nobody" << endl;
//     } else if (winner == 'X') {
//         cout << "Petya won" << endl;
//     } else {
//         cout << "Vanya won" << endl;
//     }

//     return 0;
// }





#include <iostream>

std::string CreateField(std::string str1, std::string str2, std::string str3)
{
    return str1 + str2 + str3;
}

bool CheckSym(std::string str)
{
    if (str.length() != 9) return false;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != 'X' && str[i] != 'O' && str[i] != '.') return false;
    }
    return true;
}

int CheckCount(std::string str)
{
    int symX = 0, symO = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'X') symX++;
        else if (str[i] == 'O') symO++;
    }
    if (symO > symX || symX - symO > 1) return 0;
    if (symO == symX) return 1;
    if (symO > symX) return 2;
    else return 3;
}

int CheckX(std::string str)
{
    int winCount = 0;
    if (str[0] == 'X' && str[1] == 'X' && str[2] == 'X') winCount++;
    if (str[3] == 'X' && str[4] == 'X' && str[5] == 'X') winCount++;
    if (str[6] == 'X' && str[7] == 'X' && str[8] == 'X') winCount++;
    if (str[0] == 'X' && str[3] == 'X' && str[6] == 'X') winCount++;
    if (str[1] == 'X' && str[4] == 'X' && str[7] == 'X') winCount++;
    if (str[2] == 'X' && str[5] == 'X' && str[8] == 'X') winCount++;
    if (str[0] == 'X' && str[4] == 'X' && str[8] == 'X') winCount++;
    if (str[2] == 'X' && str[4] == 'X' && str[6] == 'X') winCount++;
    if (winCount == 1) return 1;
    if (winCount > 1) return 2;
    else return 0;
}

int CheckO(std::string str)
{
    int winCount = 0;
    if (str[0] == 'O' && str[1] == 'O' && str[2] == 'O') winCount++;
    if (str[3] == 'O' && str[4] == 'O' && str[5] == 'O') winCount++;
    if (str[6] == 'O' && str[7] == 'O' && str[8] == 'O') winCount++;
    if (str[0] == 'O' && str[3] == 'O' && str[6] == 'O') winCount++;
    if (str[1] == 'O' && str[4] == 'O' && str[7] == 'O') winCount++;
    if (str[2] == 'O' && str[5] == 'O' && str[8] == 'O') winCount++;
    if (str[0] == 'O' && str[4] == 'O' && str[8] == 'O') winCount++;
    if (str[2] == 'O' && str[4] == 'O' && str[6] == 'O') winCount++;
    if (winCount == 1) return 1;
    if (winCount > 1) return 2;
    else return 0;
}

int main()
{
    std::string tic, tac, toe, field;
    std::cin >> tic >> tac >> toe;
    field = CreateField(tic, tac, toe);

    if (!CheckSym(field))
    {
        std::cout << "Incorrect!\n";
    }
    else if (CheckX(field) == 1 && CheckO(field) == 0 && CheckCount(field) == 3)
    {
        std::cout << "Petya won!\n";
    }
    else if (CheckX(field) == 0 && CheckO(field) == 1 && CheckCount(field) == 1)
    {
        std::cout << "Vanya won!\n";
    }
    else if (CheckX(field) == 0 && CheckO(field) == 0 && CheckCount(field) != 0)
    {
        std::cout << "Nobody!\n";
    }
    else
    {
        std::cout << "Incorrect!\n";
    }
    return 0;
}