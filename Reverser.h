#ifndef __REVERSER_H__
#define __REVERSER_H__

#include <string>

class Reverser
{
private:
    int number = 0; 
public:
    int reverseDigit(int value);
    std::string reverseString(std::string characters);
};

#endif