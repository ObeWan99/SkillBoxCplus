#include <iostream>
#include <ctime>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>

struct Friend {
    std::string name;
    std::tm birthday;
};

int main() {
    std::vector<Friend> friends;
    
    while (true) {
        Friend friendData;
        std::cout << "Enter friend's name (or 'end' to finish): ";
        std::cin >> friendData.name;
        
        if (friendData.name == "end") {
            break;
        }
        
        std::cout << "Enter friend's birthday (YYYY/MM/DD): ";
        std::cin >> std::get_time(&friendData.birthday, "%Y/%m/%d");
        
        friends.push_back(friendData);
    }
    
    std::time_t now = std::time(nullptr);
    std::tm* currentTime = std::localtime(&now);
    
    std::tm closestBirthday = {0};
    bool foundClosest = false;
    
    for (const auto& friendData : friends) {
        if (friendData.birthday.tm_mon < currentTime->tm_mon || 
            (friendData.birthday.tm_mon == currentTime->tm_mon && friendData.birthday.tm_mday < currentTime->tm_mday)) {
            continue; // Skip if birthday has already passed this year
        }
        std::tm tempFriendBirthday = friendData.birthday;
        std::tm tempClosestBirthday = closestBirthday;

        if (!foundClosest || difftime(std::mktime(&tempFriendBirthday), std::mktime(&tempClosestBirthday)) < 0) {
            closestBirthday = friendData.birthday;
            foundClosest = true;
        }
    }
    
    if (foundClosest) {
        if (closestBirthday.tm_mon == currentTime->tm_mon && closestBirthday.tm_mday == currentTime->tm_mday) {
            std::cout << "Happy Birthday today, " << friends[0].name << "!\n";
        } else {
            std::cout << "Next closest birthday is for " << friends[0].name << " on: " 
                      << closestBirthday.tm_mon + 1 << "/" << closestBirthday.tm_mday << std::endl;
        }
    } else {
        std::cout << "No upcoming birthdays found." << std::endl;
    }
    
    return 0;
}