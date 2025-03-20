#include "Truckloads.h"
#include "Reverser.h"
#include <iostream>

using namespace std;

int main(){
    Truckloads t;
    // test normal case
    // int numCrates = 1024;
    // int loadSize = 5;

    // int numCrates = 14;
    // int loadSize = 3;

    //test boundary case: 2<=numCrates<=10000 && 1<=loadSize<=numCrates-1
    int numCrates = 10000;
    int loadSize = 9999;

    // int numCrates = 2;
    // int loadSize = 1;

    cout << t.numTrucks(numCrates, loadSize) << endl;

    Reverser s;
    // test normal number and string
    cout << s.reverseDigit(10636384) << endl;
    cout << s.reverseString("do hai trung") << endl;
    // test negative number and special characters in string
    cout << s.reverseDigit(-6734) << endl;
    cout << s.reverseString(";.]/;,;][]") << endl;

    return 0;
}