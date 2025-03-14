#ifndef __COMPUTER_H__
#define __COMPUTER_H__

#include "Player.h"

class Computer:public Player
{
public:
    Computer();
    Move* makeMove();
    std::string getName();
};

#endif