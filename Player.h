#ifndef __PLAYER_H__
#define __PLAYER_H__

#include "Move.h"

class Player 
{
private:
public:
    virtual Move* makeMove() = 0;
    virtual std::string getName() = 0;
};

#endif