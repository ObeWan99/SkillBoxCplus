#pragma once

#include <vector>
#include <string>
#include "track.h"

class AudioPlayer {
public:
    void addTrack(const Track& track);
    void play(const std::string& trackTitle);
    void pause();
    void next();
    void stop();
    void exit();

private:
    std::vector<Track> tracks;
    Track* currentTrack = nullptr;
    bool isPlaying = false;
    bool isPaused = false;
};


