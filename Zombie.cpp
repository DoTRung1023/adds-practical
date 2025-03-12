#include "Zombie.h"

string Zombie::getName(){
    return "Zombie";
}
bool Zombie::isCounter(Move* move){
    for(int i = 0; i<counter.size(); i++){
        if(counter[i] == move->getName()){
            return true;
        }
    }
    return false;
}