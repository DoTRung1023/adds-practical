#include "Human.h"
#include <cctype>

Human::Human(){
    name = "Human";
}

Human::Human(string name): name(name){}

char Human::makeMove(){
    int found = 0;
    while(found == 0){
        cout << "Enter move:";
        cin >> move;
        if(( move >= 'a' && move <= 'z') || ( move >= 'A' && move <= 'Z')){
            move = toupper(move);
            if( move == 'R' || move == 'P' || move == 'S'){
                found = 1;
            }
        }
    }
    return move;
}

string Human::getName(){
    return name;
}
