#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int n = nums.size();
    int i = 1, j = 1; // i --> slow pointer, j --> fast pointer
    
    while(j < n){
        if(nums[j] != nums[j-1]){
            nums[i++] = nums[j];
        }
        j++;
    }
    return i;
}

int main(){
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    cout<<removeDuplicates(nums);
    return 0;
}