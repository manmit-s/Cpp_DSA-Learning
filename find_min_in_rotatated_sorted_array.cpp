#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int findMin(vector<int>& nums) {
    int s = 0, e = nums.size() - 1, ans = INT_MAX;

    while (s <= e) {
        int mid = s + (e - s) / 2;

        // If left part [s..mid] is sorted,
        // then nums[s] is the smallest in this range.
        // Update ans and move search to the right half.
        if (nums[s] <= nums[mid]) {
            ans = min(ans, nums[s]);
            s = mid + 1;
        }
        // Otherwise, the rotation point lies in [s..mid],
        // so nums[mid] could be the minimum.
        // Update ans and move search to the left half.
        else {
            ans = min(ans, nums[mid]);
            e = mid - 1;
        }
    }
    return ans;
}


int main(){
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    cout<<findMin(nums);
    return 0;
}