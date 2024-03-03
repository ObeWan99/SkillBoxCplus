#include <iostream>
#include <fstream>
#include <vector>
#include <ctime>
#include <cstdlib>

struct Banknote {
    int denomination;
    int quantity;
};

struct ATM {
    std::vector<Banknote> banknotes;
};

void loadATMState(ATM& atm) {
    std::ifstream file("atm_state.bin", std::ios::binary);
    if (file.is_open()) {
        file.read(reinterpret_cast<char*>(&atm), sizeof(atm));
        file.close();
    }
}

void saveATMState(const ATM& atm) {
    std::ofstream file("atm_state.bin", std::ios::binary);
    if (file.is_open()) {
        file.write(reinterpret_cast<const char*>(&atm), sizeof(atm));
        file.close();
    }
}

void fillATM(ATM& atm) {
    srand(time(nullptr));
    for (int i = 0; i < atm.banknotes.size(); ++i) {
        atm.banknotes[i].quantity = rand() % 101; // Random quantity of banknotes (0-10)
    }
}

void withdrawMoney(ATM& atm, int amount) {
    for (int i = atm.banknotes.size() - 1; i >= 0; --i) {
        int numBanknotes = std::min(amount / atm.banknotes[i].denomination, atm.banknotes[i].quantity);
        amount -= numBanknotes * atm.banknotes[i].denomination;
        atm.banknotes[i].quantity -= numBanknotes;
    }

    if (amount != 0) {
        std::cout << "Unable to withdraw the requested amount. Please try a different amount." << std::endl;
    }
}

void displayATMState(const ATM& atm) {
    std::cout << "ATM State:" << std::endl;
    for (const auto& banknote : atm.banknotes) {
        std::cout << "Denomination: " << banknote.denomination << " Quantity: " << banknote.quantity << std::endl;
    }
}

int main() {
    ATM atm{ {{100, 0}, {200, 0}, {500, 0}, {1000, 0}, {2000, 0}, {5000, 0}} };
    
    loadATMState(atm);

    char choice;
    do {
        std::cout << "Enter '+' to fill the ATM, '-' to withdraw money, or 'q' to quit: ";
        std::cin >> choice;

        switch (choice) {
            case '+':
                fillATM(atm);
                displayATMState(atm);
                break;
            case '-':
                int amount;
                std::cout << "Enter the amount to withdraw (multiple of 100): ";
                std::cin >> amount;
                withdrawMoney(atm, amount);
                displayATMState(atm);
                break;
            default:
                break;
        }
    } while (choice != 'q');

    saveATMState(atm);

    return 0;
}