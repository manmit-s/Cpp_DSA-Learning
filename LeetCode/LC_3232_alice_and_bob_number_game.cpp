#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int singleSum = 0, doubleSum = 0; 
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > 9){
                doubleSum += nums[i];
                continue;
            }
            singleSum += nums[i];
        }
        if(singleSum > doubleSum || doubleSum > singleSum) return true;
        return false;
    }
};

int main(){
    
    return 0;
}