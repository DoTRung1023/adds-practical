#include "Human.h"
#include "Computer.h"
#include "Player.h"
#include "Referee.h"

int main(){
    Referee r;
    Player* h = new Human;
    Player* c = new Computer;

    Player* win = r.refGame(h, c);

    if(win == nullptr){
        cout << "It's a Tie" << endl;
    }
    else{
        cout << win->getName() << " Wins" << endl;
    }

    return 0;
}