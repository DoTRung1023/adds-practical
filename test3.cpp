#include "EfficientTruckloads.h"
#include <iostream>

using namespace std;

int main(){
    int numCrates = 1024;
    int loadSize = 5;
    vector<int> memo(numCrates+1, -1);

    EfficientTruckloads ef;

    cout << ef.numTrucks(numCrates, loadSize, memo) << endl;

    return 0;
}