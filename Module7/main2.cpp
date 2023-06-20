#include <iostream>
using namespace std;
int main()
{
    int water{1000};
    cout << "кол-во воды в кофемашинке " << water << endl;
    int milk{1000};
    cout << "кол-во молока в кофемашинке " << milk << endl;

    int counterLatte{};
    int counterAmericano{};
    int drink{};
    while (true)
    {
        cout << "Выберите напиток(1-американо, 2-латте): ";
        cin >> drink;
        if (drink == 1 && water > 300)
        {
            if (water < 300 && water > 30)
            {
                cout << "Остаток воды: " << water << endl;
                cout << "Ваш напиток не готов " << endl
                     << "Попробуйте приготовить другой напиток " << endl;
            }
            water -= 300;
            counterAmericano++;
            cout << "Ваш напиток готов\n";
        }
        else if (drink == 2 && water > 30 && milk > 270)
        {
            if (water < 30 && milk < 270)
            {
                cout << "Остаток воды" << water << endl
                     << "Остаток молока" << milk << endl
                     << "Ваш напиток не готов\n";
            }
            water -= 30;
            milk -= 270;
            counterLatte++;
            cout << "Ваш напиток готов\n";
        }
        else if ((drink == 1 && water < 300) || (drink == 2 && water < 30 && milk < 270))
        {
            if (water < 30 && milk < 270)
            {
                break;
            }
            else
            {
                cout << "попробуйте приготовить другой напиток\n";
            }
        }
    }

    cout << "***отчет*** " << endl
         << "Ингредиентов осталось: " << endl
         << "Вода: " << water << " мл" << endl
         << "Молоко: " << milk << " мл" << endl
         << "Кружек американо приготовлено: " << counterAmericano << endl
         << "Кружек латте приготовлено: " << counterLatte << endl;

    return 0;
}