#include "Referee.h"

Referee::Referee(){}
Player* Referee::refGame(Player* player1, Player* player2){
    char move_1 = player1->makeMove();
    char move_2 = player2->makeMove();
    if(move_2 == move_1){
        return nullptr;
    }
    else{
        if(move_2 == 'R'){
            if(move_1 == 'S'){
                return player2;
            }
            else{
                return player1;
            }
        }
        else if(move_2 == 'S'){
            if(move_1 == 'P'){
                return player2;
            }
            else{
                return player1;
            }
        }
        if(move_2 == 'P'){
            if(move_1 == 'R'){
                return player2;
            }
            else{
                return player1;
            }
        }
    }
    return nullptr;
}
