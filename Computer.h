#ifndef __COMPUTER_H__
#define __COMPUTER_H__

#include "Player.h"
#include <iostream>
#include <string>

using namespace std;

class Computer:public Player
{
private:
    char move;
    string name;
public:
    Computer();
    char makeMove();
    string getName();
};

#endif