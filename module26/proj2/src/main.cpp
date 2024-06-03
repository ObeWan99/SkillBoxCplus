#include <iostream>
#include <string>
#include "phone.h"

int main() {
    MobilePhone phone;

    std::string command;
    while (true) {
        std::cout << "Enter command (add, call, sms, exit): ";
        std::cin >> command;

        if (command == "add") {
            std::string name, phoneNumber;
            std::cout << "Enter contact name: ";
            std::cin >> name;
            std::cout << "Enter phone number: ";
            std::cin >> phoneNumber;
            phone.addContact(name, phoneNumber);
        } else if (command == "call") {
            std::string contact;
            std::cout << "Enter contact name or phone number to call: ";
            std::cin >> contact;
            phone.call(contact);
        } else if (command == "sms") {
            std::string phoneNumber, message;
            std::cout << "Enter phone number: ";
            std::cin >> phoneNumber;
            std::cout << "Enter message: ";
            std::cin.ignore(); // Clear input buffer
            std::getline(std::cin, message);
            phone.sendSMS(phoneNumber, message);
        } else if (command == "exit") {
            break;
        } else {
            std::cout << "Invalid command. Please try again." << std::endl;
        }
    }

    return 0;
}
