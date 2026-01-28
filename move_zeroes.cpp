#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int n = nums.size();
    int i = 0, j = 0;
    /*
    APPROACH
    Basically i pointer is fast pointer and j pointer is slow pointer meaning, the i pointer will increment everytime till it hits a non-zero element, when it does so we need to just swap ith element(non-zero) with jth element(zero).
    Therefore we are puuting all the zeroes to right side without altering the sequence of non zero elements
    */
    while(i < n){
        if(nums[i] != 0){
            swap(nums[i], nums[j]);
            j++;
        }
        i++;
    }
}

int main(){
    vector<int> nums = {1,0,0,3,12};
    moveZeroes(nums);
    for(int x : nums){
        cout<<x<<" ";
    }
    return 0;
}