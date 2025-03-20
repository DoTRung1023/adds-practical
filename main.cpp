#include "Truckloads.h"
#include "Reverser.h"
#include <iostream>

using namespace std;

int main(){
    Truckloads t;
    int numCrates = 1024;
    int loadSize = 5;
    cout << t.numTrucks(numCrates, loadSize) << endl;

    Reverser s;
    cout << s.reverseDigit(10636384) << endl;
    cout << s.reverseString("do hai trung") << endl;


    return 0;
}