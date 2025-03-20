#include "Reverser.h"

using namespace std;

int Reverser::reverseDigit(int value){
    if(value < 10 && value >= 0){
        return number + value;
    }
    else if(value < 0){
        return -1;
    }
    number += value%10;
    number*=10;
    return reverseDigit(value/10);
}

string Reverser::reverseString(string characters){
    int len = characters.length();
    if(characters.length() == 0){
        return "";
    }
    string last(1, characters[len-1]);
    return last+reverseString(characters.erase(characters.size()-1));
}