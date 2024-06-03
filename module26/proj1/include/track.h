#pragma once

#include <string>
#include <ctime>

class Track {
public:
    Track(const std::string& title, const std::tm& creationDate, int duration);
    const std::string& getTitle() const;
    const std::tm& getCreationDate() const;
    int getDuration() const;

private:
    std::string title;
    std::tm creationDate;
    int duration; // в секундах
};
