#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int drop = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] > nums[(i+1)%n]) drop++;
        }
        if(drop > 1) return false;
        return true;
    }
};

int main(){
    vector<int> nums = {3,4,5,1,2};
    Solution sol;
    if(sol.check(nums)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}