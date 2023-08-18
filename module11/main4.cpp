

#include <iostream>
using namespace std;

string CreateField(std::string str1, std::string str2, std::string str3)
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
    string tic, tac, toe, field;
    cin >> tic >> tac >> toe;
    field = CreateField(tic, tac, toe);

    if (!CheckSym(field))
    {
        cout << "Incorrect!\n";
    }
    else if (CheckX(field) == 1 && CheckO(field) == 0 && CheckCount(field) == 3)
    {
        cout << "Petya won!\n";
    }
    else if (CheckX(field) == 0 && CheckO(field) == 1 && CheckCount(field) == 1)
    {
        cout << "Vanya won!\n";
    }
    else if (CheckX(field) == 0 && CheckO(field) == 0 && CheckCount(field) != 0)
    {
        cout << "Nobody!\n";
    }
    else
    {
        cout << "Incorrect!\n";
    }
    return 0;
}

