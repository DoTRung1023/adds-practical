#ifndef __PIRATE_H__
#define __PIRATE_H__

#include <iostream>
#include <vector>
#include "Move.h"

using namespace std;

class Pirate:public Move
{
private:
    vector<string> counter = {"Robot", "Monkey"};
public:
    string getName();
    bool isCounter(Move* move);
};

#endif