#include <iostream>
#include <vector>
using namespace std;

vector <int> pairSum(vector <int> nums, int target){ //Time Complexity is O(n)
    vector <int> ans;
    int n = nums.size();
    int i = 0, j = n - 1;
    while(i < j){
        if(nums[i] + nums[j] > target){
            j--;
        }
        else if(nums[i] + nums[j] < target){
            i++;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}

int main(){
    vector <int> nums = {2, 7, 11, 15};
    int target = 26, n = nums.size();

    vector <int> ans = pairSum(nums, target);
    cout<<ans[0]<<" "<<ans[1];
    
    return 0;
}