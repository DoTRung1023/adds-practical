#ifndef __PAPER_H__
#define __PAPER_H__

#include <iostream>
#include <vector>
#include "Move.h"

using namespace std;

class Paper:public Move
{
private:
    vector<string> counter = {"Rock"};
public:
    string getName();
    bool isCounter(Move* move);
};

#endif