#include <iostream>
#include <vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int n = nums.size();
    int ans = 0, temp = 0;
    for (int x : nums){
        if (x == 1) {
            temp++;
            ans = max(ans, temp);
        } 
        else {
            temp = 0;
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {1,0,1,1,0,1};
    int res = findMaxConsecutiveOnes(nums);
    cout<<res;
    return 0;
}