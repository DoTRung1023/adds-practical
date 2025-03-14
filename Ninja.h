#ifndef __NINJA_H__
#define __NINJA_H__

#include "Move.h"
#include <vector>

class Ninja:public Move
{
private:
    std::vector<std::string> counter = {"Pirate", "Zombie"};
public:
    std::string getName();
    bool isCounter(Move* move);
};

#endif