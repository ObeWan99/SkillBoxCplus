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
    
    for (const auto& friendData : friends) {
        if (friendData.birthday.tm_mon < currentTime->tm_mon || 
            (friendData.birthday.tm_mon == currentTime->tm_mon && friendData.birthday.tm_mday < currentTime->tm_mday)) {
            continue; // Skip if birthday has already passed this year
        }
        
        if (friendData.birthday.tm_mon == currentTime->tm_mon && friendData.birthday.tm_mday == currentTime->tm_mday) {
            std::cout << "Happy Birthday, " << friendData.name << "!\n";
        } else {
            std::cout << "Next birthday for " << friendData.name << " is on: " 
                      << friendData.birthday.tm_mon + 1 << "/" << friendData.birthday.tm_mday << std::endl;
        }
    }
    
    return 0;
}