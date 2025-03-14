#ifndef __MOVE_H__
#define __MOVE_H__

#include <string>

class Move
{
private:
public:
    virtual std::string getName() = 0;
    virtual bool isCounter(Move* move) = 0;
};

#endif