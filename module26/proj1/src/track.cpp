#include "track.h"

Track::Track(const std::string& title, const std::tm& creationDate, int duration)
    : title(title), creationDate(creationDate), duration(duration) {}

const std::string& Track::getTitle() const {
    return title;
}

const std::tm& Track::getCreationDate() const {
    return creationDate;
}

int Track::getDuration() const {
    return duration;
}