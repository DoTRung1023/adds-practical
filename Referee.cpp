#include "Referee.h"

Referee::Referee(){}
Player* Referee::refGame(Player* player1, Player* player2){
    if(player1 == nullptr || player2 == nullptr){
        return nullptr;
    }
    Move* move_1 = player1->makeMove();
    Move* move_2 = player2->makeMove();
    if(move_1 == nullptr || move_2 == nullptr){
        return nullptr;
    }
    if(move_1->isCounter(move_2)){
        return player1;
    }
    else if(move_2->isCounter(move_1)){
        return player2;
    }
    return nullptr;
}