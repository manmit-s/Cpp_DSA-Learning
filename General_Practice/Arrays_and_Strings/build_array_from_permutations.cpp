#include <iostream>
#include <vector>
using namespace std;

vector<int> buildArray(vector<int>& nums) {
    vector<int> ans(nums.size());
    for(int i = 0; i < nums.size(); i++){
        ans[i] = nums[nums[i]];
    }        
    return ans;
}

int main(){
    vector<int> nums = {0,2,1,5,3,4};
    vector<int> res = buildArray(nums);
    for(int x : res){
        cout<<x<<" ";
    }
    return 0;
}