#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        
        //Phase 1: Increasing
        while(i < n-1 && nums[i] < nums[i+1]) i++;
        if(i == 0) return false;
        
        //Phase 2: Decreasing
        int downStart = i;
        while(i < n-1 && nums[i] > nums[i+1]) i++;
        if(downStart == i) return false;

        //Phase 3: Increasing
        int upStart = i;
        while(i < n-1 && nums[i] < nums[i+1]) i++;
        if(i == upStart) return false;

        return i == n-1; //it should return true
    }
};

int main(){
    
    return 0;
}