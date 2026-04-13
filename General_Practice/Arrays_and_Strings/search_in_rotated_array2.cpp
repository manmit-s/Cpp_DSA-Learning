#include <iostream>
#include <vector>
using namespace std;

/* Unconventional Test Cases from AI so that I dont fkup */
//T1 (Passed)
// nums = [2,2,2,2,2,2,2]
// target = 3

//T2 (Failed) -> (Passed)
// nums = [1,0,1,1,1]
// target = 0


bool search(vector<int>& nums, int target) {
    int s = 0, e = nums.size() - 1;

    while(s <= e){
        int mid = s + (e - s)/2;

        if(nums[mid] == target) return true;

        //Handle Duplicates for T2
        if(nums[s] == nums[mid] && nums[mid] == nums[e]){
            s++, e--;
        }

        else if(nums[s] <= nums[mid]){
            if(nums[s] <= target && nums[mid] >= target){
                e = mid - 1;
            }
            else s = mid + 1;
        }
        else{
            if(nums[e] >= target && nums[mid] <= target){
                s = mid + 1;
            }
            else e = mid - 1;
        }
    }
    return false; //should never execute
}

int main(){
    vector<int> nums = {1,0,1,1,1};
    int target = 0;

    cout<<search(nums, target);

    return 0;
}