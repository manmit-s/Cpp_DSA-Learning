#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int firstMissingPositive(vector<int>& nums) {
    if(nums.empty()) return 1;
    sort(nums.begin(), nums.end());
    if(nums[0] != 1 && nums[0] > 1) return 1;
    int i = 0, x = 1, n = nums.size();
    while(i < n){
        if(nums[i] == x) x++;
        i++;
    }
    return x;
}

int main(){
    vector<int> nums = {-3, -1, 0, 2};
    cout<<firstMissingPositive(nums);
    return 0;
}