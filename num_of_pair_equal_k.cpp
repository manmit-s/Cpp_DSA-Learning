#include <iostream>
#include <vector>
using namespace std;

//Brute Force O(n*n)
int countKDifference(vector<int>& nums, int k) {
    int n = nums.size();
    int count = 0;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(abs(nums[i] - nums[j]) == k) count++;
        }
    }
    return count;
}

//Use HashMap for it to optimize it

int main(){
    vector<int> nums = {1,2,2,1};
    int k = 1;
    int res = countKDifference(nums, k);
    cout<<res;
    return 0;
}