#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

/* BRUTE FORCE APPROACH Time Complexity - O(n*n) */

// int pivotIndex(vector<int>& nums) {
//     int n = nums.size();
//     int lSum = 0, rSum = 0;
//     for(int i = 0; i < n; i++){
//         if(i == 0){
//             lSum = 0;
//             rSum = accumulate(nums.begin() + (i+1), nums.end(), 0);
//         }
//         else if(i == n-1){
//             lSum = accumulate(nums.begin(), nums.begin() + i, 0);
//             rSum = 0;
//         }
//         else{
//             lSum = accumulate(nums.begin(), nums.begin() + i, 0);
//             rSum = accumulate(nums.begin() + (i+1), nums.end(), 0);
//         }
//         if(lSum == rSum) return i;
//     }
//     return -1;
// }

/* Optimal APPROACH Time Complexity - O(n) */

int pivotIndex(vector<int>& nums) {
    int n = nums.size();
    int lSum = 0, total = accumulate(nums.begin(), nums.end(), 0);
    for(int i = 0; i < n; i++){
        int rSum = total - nums[i] - lSum;
        if(lSum == rSum) return i;
        lSum += nums[i];
    }
    return -1;
}

int main(){
    vector<int> nums = {1,7,3,6,5,6};
    int res = pivotIndex(nums);
    cout<<res;
    return 0;
}