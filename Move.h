#ifndef __MOVE_H__
#define __MOVE_H__

#include <iostream>

using namespace std;

class Move
{
private:
public:
    virtual string getName() = 0;
    virtual bool isCounter(Move* move) = 0;
};

#endif