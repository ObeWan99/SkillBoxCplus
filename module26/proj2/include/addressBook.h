#pragma once

#include <string>
#include <map>
#include "contact.h"

class AddressBook {
public:
    void addContact(const std::string& name, const std::string& phoneNumber);
    std::string getPhoneNumber(const std::string& name);

private:
    std::map<std::string, std::string> contacts;
};
