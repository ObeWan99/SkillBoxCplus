#include <iostream>
using namespace std;

int main() {
    int milk, water;
    int americano_cups = 0, latte_cups = 0;
    cout << "Введите количество миллилитров молока в кофемашине: ";
    cin >> milk;
    cout << "Введите количество миллилитров воды в кофемашине: ";
    cin >> water;
    while (true) {
        cout << "Выберите напиток: 1 - американо, 2 - латте, 0 - выход: ";
        int choice;
        cin >> choice;
        if (choice == 0) {
            break;
        } else if (choice == 1) {
            if (water >= 300) {
                water -= 300;
                americano_cups++;
                cout << "Ваш напиток готов" << endl;
            } else {
                cout << "Не хватает воды" << endl;
            }
        } else if (choice == 2) {
            if (water >= 30 && milk >= 270) {
                water -= 30;
                milk -= 270;
                latte_cups++;
                cout << "Ваш напиток готов" << endl;
            } else if (water < 30) {
                cout << "Не хватает воды" << endl;
            } else {
                cout << "Не хватает молока" << endl;
            }
        } else {
            cout << "Некорректный выбор" << endl;
        }
        if (water < 30 && milk < 270) {
            cout << "Ингредиенты подошли к концу" << endl;
            cout << "Остаток воды: " << water << " мл" << endl;
            cout << "Остаток молока: " << milk << " мл" << endl;
            cout << "Приготовлено чашек американо: " << americano_cups << endl;
            cout << "Приготовлено чашек латте: " << latte_cups << endl;
            return 0;
        }
    }
    cout << "Остаток воды: " << water << " мл" << endl;
    cout << "Остаток молока: " << milk << " мл" << endl;
    cout << "Приготовлено чашек американо: " << americano_cups << endl;
    cout << "Приготовлено чашек латте: " << latte_cups << endl;
    return 0;
}