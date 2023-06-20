#include <iostream>
using namespace std;

int main()
{
    int y{7};
    int x{10};
    string derection{};
    while (true)
    {
        cout << "В какую сторону вы хотите направить робота?" << endl
             << "Север (клавиша W), юг (клавиша S), запад (клавиша A) или восток (клавиша D):" << endl
             << "Для завершения работы с программой нажмите любую другую клавишу\n";
        cin >> derection;
        if (derection == "A")
        {
            if (x == 0)
            {
                cout << "Марсоход находится на позиции " << x << " " <<y << endl;
            }
            else
            {
                x--;
                cout << "Марсоход находится на позиции " << x << " " <<y << endl;
            }
        }
        else if (derection == "W")
        {
            if (y == 15)
            {
                cout << "Марсоход находится на позиции " << x << " " <<y << endl;
            }
            else
            {
                y++;
                cout << "Марсоход находится на позиции " << x << " " <<y << endl;
            }
        }
        else if (derection == "D")
        {
            if (x == 20)
            {
                cout << "Марсоход находится на позиции " << x << " " <<y << endl;
            }
            else
            {
                x++;
                cout << "Марсоход находится на позиции " << x << " " <<y << endl;
            }
        }
        else if (derection == "S")
        {
            if (y == 0)
            {
                cout << "Марсоход находится на позиции " << x << " " <<y << endl;
            }
            else
            {
                y--;
                cout << "Марсоход находится на позиции " << x << " " <<y << endl;
            }
        }
        else
        {
            break;
        }
    }

    return 0;
}