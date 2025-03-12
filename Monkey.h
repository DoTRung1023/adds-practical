#ifndef __MONKEY_H__
#define __MONKEY_H__

#include <iostream>
#include <vector>
#include "Move.h"

using namespace std;

class Monkey:public Move
{
private:
    vector<string> counter = {"Robot", "Ninja"};
public:
    string getName();
    bool isCounter(Move* move);
};

#endif