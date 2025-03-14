#include "Zombie.h"

using namespace std;

string Zombie::getName(){
    return "Zombie";
}
bool Zombie::isCounter(Move* move){
    for(size_t i = 0; i<counter.size(); i++){
        if(counter[i] == move->getName()){
            return true;
        }
    }
    return false;
}