#ifndef __PIRATE_H__
#define __PIRATE_H__

#include <vector>
#include "Move.h"

class Pirate:public Move
{
private:
    std::vector<std::string> counter = {"Robot", "Monkey"};
public:
    std::string getName();
    bool isCounter(Move* move);
};

#endif