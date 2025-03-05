#ifndef __HUMAN_H__
#define __HUMAN_H__

#include "Player.h"
#include <iostream>
#include <string>

using namespace std;

class Human:public Player
{
private:
    char move;
    string name;
public:
    Human();
    Human(string name);
    char makeMove();
    string getName();
};

#endif