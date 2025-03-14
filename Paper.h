#ifndef __PAPER_H__
#define __PAPER_H__

#include <vector>
#include "Move.h"

class Paper:public Move
{
private:
    std::vector<std::string> counter = {"Rock"};
public:
    std::string getName();
    bool isCounter(Move* move);
};

#endif