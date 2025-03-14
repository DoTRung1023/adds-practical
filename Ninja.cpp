#include "Ninja.h"

using namespace std;

string Ninja::getName(){
    return "Ninja";
}

bool Ninja::isCounter(Move* move){
    for(size_t i = 0; i<counter.size(); i++){
        if(counter[i] == move->getName()){
            return true;
        }
    }
    return false;
}