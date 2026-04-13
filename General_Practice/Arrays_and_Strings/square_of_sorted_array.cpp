#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
    vector<int> ans(nums.size());
    for(int i = 0; i < nums.size(); i++){
        ans[i] = nums[i] * nums[i];
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main(){
    vector<int> nums = {-4,-1,0,3,10};
    vector<int> res = sortedSquares(nums);

    for(int x : res){
        cout<<x<<" ";
    }
    return 0;
}