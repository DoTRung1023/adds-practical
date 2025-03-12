#ifndef __ROCK_H__
#define __ROCK_H__

#include <iostream>
#include <vector>
#include "Move.h"

using namespace std;

class Rock:public Move
{
private:
    vector<string> counter = {"Scissors"};
public:
    string getName();
    bool isCounter(Move* move);
};

#endif