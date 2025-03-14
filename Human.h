#ifndef __HUMAN_H__
#define __HUMAN_H__

#include "Player.h"

class Human:public Player
{
private:
    std::string name;
public:
    Human();
    Human(std::string name);
    Move* makeMove();
    std::string getName();
};

#endif