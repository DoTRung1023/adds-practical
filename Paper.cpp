#include "Paper.h"

string Paper::getName(){
    return "Paper";
}

bool Paper::isCounter(Move* move){
    for(int i = 0; i<counter.size(); i++){
        if(counter[i] == move->getName()){
            return true;
        }
    }
    return false;
}