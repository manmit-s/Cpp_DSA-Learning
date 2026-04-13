#include <iostream>
#include <vector>
using namespace std;

vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans;
    for(int i = 0; i < n; i++){
        int count = 0;
        for(int j = 0; j < n; j++){
            if(nums[j] < nums[i]){
                count++;
            }
        }
        ans.push_back(count);
    }
    return ans;
}
//Must write Optimized approah using unordered_map

int main(){
    vector<int> nums = {8,1,2,2,3};
    vector<int> res = smallerNumbersThanCurrent(nums);
    for(int x : res){
        cout<<x<<" ";
    }
    return 0;
}