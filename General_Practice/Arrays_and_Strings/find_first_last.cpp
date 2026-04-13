// Find First and Last Position of Element in Sorted Array

#include <iostream>
#include <vector>
using namespace std;

vector<int> searchRange(vector<int>& nums, int target) {
    int n = nums.size();
    int s = 0, e = n - 1, first = -1, last = -1;
    
    if(n == 0) return {-1, -1};

    while(s <= e){
        int mid = s + (e - s)/2;
        
        // first occurence left side milega so after getting mid we need to still search on left space
        if(nums[mid] == target){
            first = mid;
            e = mid - 1;
        }
        else if(nums[mid] < target) s = mid + 1;
        else e = mid - 1;
    }
    
    s = 0, e = n - 1;
    while(s <= e){
        int mid = s + (e - s)/2;
        // last occurence right side milega so after getting mid we need to still search on right space
        if(nums[mid] == target){
            last = mid;
            s = mid + 1;
        }
        else if(nums[mid] < target) s = mid + 1;
        else e = mid - 1;
    }
    return {first, last};
}

int main(){
    vector<int> nums = {5,7,7,8,8,10};
    int target = 8;
    vector<int> result = searchRange(nums, target);
    for(int x : result){
        cout<<x<<" ";
    }
    return 0;
}