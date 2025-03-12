#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

#include <iostream>
#include <vector>
#include "Move.h"

using namespace std;

class Zombie:public Move
{
private:
    vector<string> counter = {"Pirate", "Monkey"};
public:
    string getName();
    bool isCounter(Move* move);
};

#endif