#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

#include <vector>
#include "Move.h"

class Zombie:public Move
{
private:
    std::vector<std::string> counter = {"Pirate", "Monkey"};
public:
    std::string getName();
    bool isCounter(Move* move);
};

#endif