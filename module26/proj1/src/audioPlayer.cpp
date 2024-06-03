#include "audioPlayer.h"
#include <iostream>
#include <algorithm>
#include <random>
#include <iomanip>

void AudioPlayer::addTrack(const Track& track) {
    tracks.push_back(track);
}

void AudioPlayer::play(const std::string& trackTitle) {
    if (!isPlaying) {
        auto it = std::find_if(tracks.begin(), tracks.end(), [&](const Track& t) {
            return t.getTitle() == trackTitle;
        });
        if (it != tracks.end()) {
            currentTrack = &(*it);
            isPlaying = true;
            isPaused = false;
            std::cout << "Воспроизведение начато: " << currentTrack->getTitle() << ", дата создания: "
                      << std::put_time(&currentTrack->getCreationDate(), "%Y-%m-%d %H:%M:%S")
                      << ", продолжительность: " << currentTrack->getDuration() << " секунд" << std::endl;
        } else {
            std::cout << "Запись с названием '" << trackTitle << "' не найдена." << std::endl;
        }
    } else {
        std::cout << "Воспроизведение уже начато." << std::endl;
    }
}

void AudioPlayer::pause() {
    if (isPlaying && !isPaused) {
        isPaused = true;
        std::cout << "Воспроизведение приостановлено." << std::endl;
    } else {
        std::cout << "Воспроизведение уже приостановлено или не начато." << std::endl;
    }
}

void AudioPlayer::next() {
    if (isPlaying) {
        stop();
    }

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, static_cast<int>(tracks.size()) - 1);
    int randomIndex = dis(gen);
    currentTrack = &tracks[randomIndex];
    isPlaying = true;
    isPaused = false;
    std::cout << "Воспроизведение начато: " << currentTrack->getTitle() << ", дата создания: "
              << std::put_time(&currentTrack->getCreationDate(), "%Y-%m-%d %H:%M:%S")
              << ", продолжительность: " << currentTrack->getDuration() << " секунд" << std::endl;
}

void AudioPlayer::stop() {
    if (isPlaying) {
        isPlaying = false;
        isPaused = false;
        currentTrack = nullptr;
        std::cout << "Воспроизведение остановлено." << std::endl;
    } else {
        std::cout << "Воспроизведение не начато." << std::endl;
    }
}

void AudioPlayer::exit() {
    std::cout << "Выход из программы." << std::endl;
}


