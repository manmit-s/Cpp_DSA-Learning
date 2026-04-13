#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int trap(vector<int>& height) {
    int n = height.size();
    vector<int> lMax(n), rMax(n);

    // Build lMax
    lMax[0] = height[0];
    for(int i = 1; i < n; i++) {
        lMax[i] = max(lMax[i-1], height[i]);
    }

    // Build rMax
    rMax[n-1] = height[n-1];
    for(int i = n-2; i >= 0; i--) {
        rMax[i] = max(rMax[i+1], height[i]);
    }

    // Calculate trapped water
    int waterTrapped = 0;
    for(int i = 0; i < n; i++) {
        waterTrapped += min(lMax[i], rMax[i]) - height[i];
    }

    return waterTrapped;
}

int main(){
    
    return 0;
}