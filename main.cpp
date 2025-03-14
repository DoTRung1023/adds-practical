#include "Human.h"
#include "Player.h"
#include "Referee.h"
#include "Computer.h"
#include <iostream>

using namespace std;

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