#include "Computer.h"
#include "Rock.h"

using namespace std;

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