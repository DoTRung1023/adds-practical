#ifndef __MONKEY_H__
#define __MONKEY_H__

#include <vector>
#include "Move.h"

class Monkey:public Move
{
private:
    std::vector<std::string> counter = {"Robot", "Ninja"};
public:
    std::string getName();
    bool isCounter(Move* move);
};

#endif