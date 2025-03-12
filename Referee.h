#ifndef __REFEREE_H__
#define __REFEREE_H__

#include "Player.h"

class Referee
{
private:
public:
    Referee(); // constructor
    Player* refGame(Player* player1, Player* player2);
    // returns the reference to the winning player
};

#endif