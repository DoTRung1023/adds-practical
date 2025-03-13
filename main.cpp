#include "Human.h"
#include "Computer.h"
#include "Monkey.h"
#include "Move.h"
#include "Ninja.h"
#include "Paper.h"
#include "Pirate.h"
#include "Player.h"
#include "Referee.h"
#include "Robot.h"
#include "Rock.h"
#include "Scissors.h"
#include "Zombie.h"

int main(){
    Referee referee_class;
    Player* human = new Human;
    Player* computer = new Computer;

    Player* winner = referee_class.refGame(human, computer);

    if(winner == nullptr){
        cout << "It's a Tie" << endl;
    }
    else{
        cout << "Winner is " << winner->getName() << endl;
    }

    return 0;
}