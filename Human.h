#ifndef __HUMAN_H__
#define __HUMAN_H__

#include "Player.h"
#include <iostream>
#include <string>

using namespace std;

class Human:public Player
{
private:
    string name;
public:
    Human();
    Human(string name);
    Move* makeMove();
    string getName();
};

#endif