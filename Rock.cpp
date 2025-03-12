#include "Rock.h"

string Rock::getName(){
    return "Rock";
}

bool Rock::isCounter(Move* move){
    for(int i = 0; i<counter.size(); i++){
        if(counter[i] == move->getName()){
            return true;
        }
    }
    return false;
}