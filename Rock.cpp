#include "Rock.h"

using namespace std;

string Rock::getName(){
    return "Rock";
}

bool Rock::isCounter(Move* move){
    for(size_t i = 0; i<counter.size(); i++){
        if(counter[i] == move->getName()){
            return true;
        }
    }
    return false;
}