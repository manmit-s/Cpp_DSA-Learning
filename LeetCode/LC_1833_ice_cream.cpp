#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());
        int count = 0;
        for(int cost : costs){
            coins = coins - cost;
            if(coins < 0) break;
            count++;
        }
        return count;
    }
};

int main(){
    
    return 0;
}