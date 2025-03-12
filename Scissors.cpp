#include "Scissors.h"

string Scissors::getName(){
    return "Scissors";
}

bool Scissors::isCounter(Move* move){
    for(size_t i = 0; i<counter.size(); i++){
        if(counter[i] == move->getName()){
            return true;
        }
    }
    return false;
}