#ifndef __SCISSORS_H__
#define __SCISSORS_H__

#include <iostream>
#include <vector>
#include "Move.h"

using namespace std;

class Scissors:public Move
{
private:
    vector<string> counter = {"Paper"};
public:
    string getName();
    bool isCounter(Move* move);
};

#endif