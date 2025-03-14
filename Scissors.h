#ifndef __SCISSORS_H__
#define __SCISSORS_H__

#include <vector>
#include "Move.h"

class Scissors:public Move
{
private:
    std::vector<std::string> counter = {"Paper"};
public:
    std::string getName();
    bool isCounter(Move* move);
};

#endif