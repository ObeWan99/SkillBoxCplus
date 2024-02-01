#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

struct Payment {
    std::string name;
    std::string last_name;
    int amount;
    std::string date;
};

int main() {
    std::ifstream file("/home/alex/SkillBoxCplus/module19/main3.txt");
    std::vector<Payment> payments;
    int total = 0;
    Payment max_payment = {"", "", 0, ""};
    while (file) {
        Payment payment;
        file >> payment.name >> payment.last_name >>payment.amount >> payment.date;
        if (file) {
            payments.push_back(payment);
            total += payment.amount;
            if (payment.amount > max_payment.amount) {
                max_payment = payment;
            }
        }
    }
    std::cout << "Total payments: " << total << std::endl;
    std::cout << "Person with maximum payment: " << max_payment.name << " sum = " << max_payment.amount << std::endl;
    return 0;
}
