#include "EfficientTruckloads.h"
#include <vector>

using namespace std;

int EfficientTruckloads::numTrucks(int numCrates, int loadSize, vector<int>& memo){
    if(numCrates <= loadSize){
        memo[numCrates] = 1;
    }
    if(memo[numCrates] != -1){
        return memo[numCrates];
    }
    if(numCrates%2==0){
        memo[numCrates] = numTrucks(numCrates/2, loadSize, memo) + numTrucks(numCrates/2, loadSize, memo);
    }
    else{
        memo[numCrates] = numTrucks(numCrates/2, loadSize, memo) + numTrucks(numCrates/2+1, loadSize, memo);
    }
    return memo[numCrates];
}


