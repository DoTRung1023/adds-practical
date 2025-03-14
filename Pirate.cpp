#include "Pirate.h"

using namespace std;

string Pirate::getName(){
    return "Pirate";
}

bool Pirate::isCounter(Move* move){
    for(size_t i = 0; i<counter.size(); i++){
        if(counter[i] == move->getName()){
            return true;
        }
    }
    return false;
}