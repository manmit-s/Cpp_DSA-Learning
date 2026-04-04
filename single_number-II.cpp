#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int singleNumber(vector<int>& nums) {
    int i = 1;
    sort(nums.begin(), nums.end());
    
    while(i < nums.size()){
        if(nums[i] == nums[i-1]){
            i += 3;
        }
        else{
            return nums[i-1];
        }
    }
    return nums[nums.size() - 1];    
}


int main(){
    
    return 0;
}