#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int expected_sum = n * (n + 1) / 2;
    int actual_sum = accumulate(nums.begin(), nums.end(), 0);
    return expected_sum - actual_sum;
}

int main(){
    vector<int> nums = {9,6,4,2,3,5,7,0,1};
    cout<<missingNumber(nums)<<endl;
    return 0;
}