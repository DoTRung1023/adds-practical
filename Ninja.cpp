#include "Ninja.h"

string Ninja::getName(){
    return "Ninja";
}

bool Ninja::isCounter(Move* move){
    for(int i = 0; i<counter.size(); i++){
        if(counter[i] == move->getName()){
            return true;
        }
    }
    return false;
}