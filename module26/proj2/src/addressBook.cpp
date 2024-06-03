#include "addressBook.h"

void AddressBook::addContact(const std::string& name, const std::string& phoneNumber) {
    contacts[name] = phoneNumber;
}

std::string AddressBook::getPhoneNumber(const std::string& name) {
    return contacts[name];
}
