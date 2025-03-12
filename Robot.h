#ifndef __ROBOT_H__
#define __ROBOT_H__

#include <iostream>
#include <vector>
#include "Move.h"

using namespace std;

class Robot:public Move
{
private:
    vector<string> counter = {"Zombie", "Ninja"};
public:
    string getName();
    bool isCounter(Move* move);
};

#endif