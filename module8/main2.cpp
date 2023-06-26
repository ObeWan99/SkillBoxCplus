#include <iostream>
using namespace std;

int main() {
    double health, resistance, power, damage;
    cout << "Введите количество здоровья орка (от 0 до 1): ";
    cin >> health;
    while (health < 0 || health > 1) {
        cout << "Количество здоровья должно быть от 0 до 1. Попробуйте ещё раз: ";
        cin >> health;
    }
    cout << "Введите показатель сопротивляемости магии орка (от 0 до 1): ";
    cin >> resistance;
    while (resistance < 0 || resistance > 1) {
        cout << "Показатель сопротивляемости магии должен быть от 0 до 1. Попробуйте ещё раз: ";
        cin >> resistance;
    }
    while (health > 0) {
        cout << "Введите мощность огненного шара (от 0 до 1): ";
        cin >> power;
        while (power < 0 || power > 1) {
            cout << "Мощность огненного шара должна быть от 0 до 1. Попробуйте ещё раз: ";
            cin >> power;
        }
        damage = power * (1 - resistance);
        health -= damage;
        cout << "Орку нанесён урон в размере " << damage << ". Осталось " << health << " очков здоровья." << endl;
    }
    cout << "Орк погиб." << endl;
    return 0;
}