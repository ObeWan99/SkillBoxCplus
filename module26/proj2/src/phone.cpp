#include "phone.h"
#include <iostream>

void MobilePhone::addContact(const std::string& name, const std::string& phoneNumber) {
    addressBook.addContact(name, phoneNumber);
}

void MobilePhone::call(const std::string& contactName) {
    std::string phoneNumber = addressBook.getPhoneNumber(contactName);
    std::cout << "CALL " << phoneNumber << std::endl;
}

void MobilePhone::sendSMS(const std::string& phoneNumber, const std::string& message) {
    std::cout << "Sending SMS to " << phoneNumber << ": " << message << std::endl;
}
