#ifndef __PLAYER_H__
#define __PLAYER_H__

#include <iostream>
#include <string>
#include "Move.h"

using namespace std;

class Player 
{
private:
public:
    virtual Move* makeMove() = 0;
    virtual string getName() = 0;
};

#endif