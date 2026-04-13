#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
    int totalGas = 0, totalCost = 0;
    totalGas = accumulate(gas.begin(), gas.end(), 0);
    totalCost = accumulate(cost.begin(), cost.end(), 0);
    if(totalCost > totalGas) return -1;

    int start = 0, currGas = 0;
    for(int i = 0; i < gas.size(); i++){
        currGas += (gas[i] - cost[i]);

        if(currGas < 0){
            start = i + 1;
            currGas = 0;
        }
    }
    return start;
}

int main(){
    
    return 0;
}