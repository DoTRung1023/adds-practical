#ifndef __ROBOT_H__
#define __ROBOT_H__

#include <vector>
#include "Move.h"

class Robot:public Move
{
private:
    std::vector<std::string> counter = {"Zombie", "Ninja"};
public:
    std::string getName();
    bool isCounter(Move* move);
};

#endif