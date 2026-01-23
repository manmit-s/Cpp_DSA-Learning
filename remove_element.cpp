#include <iostream>
#include <vector>
using namespace std;

int removeElement(vector<int>& nums, int val) {
    int s = 0, e = nums.size() - 1;
    while(s <= e){
       if(nums[e] == val){
        e--;
       }
       else if(nums[s] == val){
        swap(nums[s], nums[e]);
        e--;
       }
       else{
        s++;
       }
    }
    return s;
}

int main(){
    vector<int> nums = {0,1,2,2,3,0,4,2};
    int val = 2;
    cout<<removeElement(nums, val);
    return 0;
}