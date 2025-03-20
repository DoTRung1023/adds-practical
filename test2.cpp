#include "Reverser.h"
#include <iostream>

using namespace std;

int main(){
    Reverser s;
    cout << s.reverseDigit(12345) << endl;
    cout << s.reverseString("hello") << endl;

    return 0;
}