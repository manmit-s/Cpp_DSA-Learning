#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int findPeakElement(vector<int>& nums) {
    if(nums.size() == 1) return 0; //for single element array it is always peak
    int s = 0, e = nums.size() - 1;

    while(s <= e){
        int mid = s + (e - s)/2;
        
        //we need to check boundaries when mid accesses the indices that are out of bound
        int left = (mid - 1 >= 0) ? nums[mid - 1] : INT_MIN;
        int right = (mid + 1 < nums.size()) ? nums[mid + 1] : INT_MIN;

        if(nums[mid] > right && nums[mid] > left){
            return mid;
        }
        else if(nums[mid] < right){ 
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return -1; //should never get executed
}

int main(){
    
    return 0;
}