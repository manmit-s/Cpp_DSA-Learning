#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxSubarraySum(vector <int> nums){
    int maxSum = nums[0], currentSum = nums[0];
    for(int i = 1; i < nums.size(); i++){
        currentSum += nums[i];
        maxSum = max(maxSum, currentSum);

        if(currentSum < 0){
            currentSum = 0;
        }
    }
    return maxSum;
}

int main() {
    vector <int> nums = {3, -4, 5, 4, -1, 7, -8};
    
    cout << "Maximum Sum of Subarray = " << maxSubarraySum(nums);
    return 0;
}