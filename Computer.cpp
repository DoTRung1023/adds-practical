#include "Computer.h"
#include "Move.h"
#include "Rock.h"

Computer::Computer(){
    name = "Computer";
}

Move* Computer::makeMove(){
    Move* new_move = new Rock;
    return new_move;
}

string Computer::getName(){
    return name;
}