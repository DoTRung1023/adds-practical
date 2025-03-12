#include "Pirate.h"

string Pirate::getName(){
    return "Pirate";
}

bool Pirate::isCounter(Move* move){
    for(int i = 0; i<counter.size(); i++){
        if(counter[i] == move->getName()){
            return true;
        }
    }
    return false;
}