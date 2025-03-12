#include "Human.h"
#include "Move.h"
#include "Robot.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include "Ninja.h"
#include "Monkey.h"
#include "Pirate.h"
#include "Zombie.h"

Human::Human(){
    name = "Human";
}

Human::Human(string name): name(name){}

Move* Human::makeMove(){
    string user_move;
    Move** arr = new Move*[8];
    arr[0] = new Rock;
    arr[1] = new Paper;
    arr[2] = new Scissors;
    arr[3] = new Robot;
    arr[4] = new Ninja;
    arr[5] = new Monkey;
    arr[6] = new Pirate;
    arr[7] = new Zombie;
    cout << "Enter move: ";
    cin >> user_move;
    for(int i = 0; i<8; i++){
        if(user_move == arr[i]->getName()){
            return arr[i];
        }
    }
    return nullptr;
}

string Human::getName(){
    return name;
}