#ifndef __HUMAN_H__
#define __HUMAN_H__

#include "Player.h"

class Human:public Player
{
public:
    Human();
    Human(std::string name);
    Move* makeMove();
    std::string getName();
};

#endif