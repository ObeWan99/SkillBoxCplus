#pragma once

#include <string>
#include "addressBook.h"

class MobilePhone {
public:
    void addContact(const std::string& name, const std::string& phoneNumber);
    void call(const std::string& contactName);
    void sendSMS(const std::string& phoneNumber, const std::string& message);

private:
    AddressBook addressBook;
};

