#include "Monkey.h"

string Monkey::getName(){
    return "Monkey";
}

bool Monkey::isCounter(Move* move){
    for(size_t i = 0; i<counter.size(); i++){
        if(counter[i] == move->getName()){
            return true;
        }
    }
    return false;
}