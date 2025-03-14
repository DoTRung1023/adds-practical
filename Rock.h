#ifndef __ROCK_H__
#define __ROCK_H__

#include <vector>
#include "Move.h"

class Rock:public Move
{
private:
    std::vector<std::string> counter = {"Scissors"};
public:
    std::string getName();
    bool isCounter(Move* move);
};

#endif