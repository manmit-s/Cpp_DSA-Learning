//Leetcode 78
#include <iostream>
#include <vector>
using namespace std;

void allSubsets(const vector<int> &nums, vector<int> &ans, int i, vector<vector<int>> &powerSet){
    if(i == (int)nums.size()){
        powerSet.push_back(ans);
        return;
    }    
    //include
    ans.push_back(nums[i]);
    allSubsets(nums, ans, i+1, powerSet);

    //backtrack
    ans.pop_back();

    //exclude
    allSubsets(nums, ans, i+1, powerSet);
}

vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> powerSet;
    vector<int> ans;
    
    allSubsets(nums, ans, 0, powerSet);
    return powerSet;
}


int main(){
    //as per leetcode inputs
    return 0;
}