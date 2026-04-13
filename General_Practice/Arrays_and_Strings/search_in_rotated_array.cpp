#include <iostream>
#include <vector>
using namespace std;

int search(vector<int>& nums, int target) {
    int st = 0, end = nums.size() - 1;
    while(st <= end){
        int mid = st + (end - st)/2;
        if(nums[mid] == target){
            return mid;
        }
        if(nums[st] <= nums[mid]){ //Left part Sorted
            if(target <= nums[mid] && target >= nums[st]){
                end = mid - 1;
            }
            else{
                st = mid + 1;
            }
        }
        else{ //Right part Sorted
            if(target <= nums[end] && target >= nums[mid]){
                st = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main(){
    
    return 0;
}