#pragma once

#include <string>

class Contact {
public:
    Contact(const std::string& name, const std::string& phoneNumber);

    std::string getName() const;
    std::string getPhoneNumber() const;

private:
    std::string name;
    std::string phoneNumber;
};