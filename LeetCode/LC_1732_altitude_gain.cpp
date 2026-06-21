#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int prefixSum = 0;
        int highestAltitude = 0;
        for(int x : gain){
            highestAltitude = max(highestAltitude, prefixSum);
            prefixSum += x;
        }
        highestAltitude = max(highestAltitude, prefixSum);
        return highestAltitude;
    }
};

int main(){
    
    return 0;
}