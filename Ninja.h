#ifndef __NINJA_H__
#define __NINJA_H__

#include <iostream>
#include <vector>

#include "Move.h"

using namespace std;

class Ninja:public Move
{
private:
    vector<string> counter = {"Pirate", "Zombie"};
public:
    string getName();
    bool isCounter(Move* move);
};

#endif