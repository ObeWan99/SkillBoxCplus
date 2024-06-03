#pragma once
#include "ram.h"
class Disk {
public:
    void save(RAM& ram);
    void load(RAM& ram);
};