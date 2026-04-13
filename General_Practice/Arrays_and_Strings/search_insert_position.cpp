//LeetCode QS

#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int s = 0, e = nums.size() - 1, mid;
    while(s <= e){
        mid = s + (e - s)/2;
        if(nums[mid] == target) return mid;
        else if(target > nums[mid]){
            s = mid + 1;
        }
        else if(target < nums[mid]){
            e = mid - 1;
        }
    }
    return s; //always index s will be the answer for missing targets
}

int main(){
    
    return 0;
}