#include <iostream>
#include <vector>
#include <set>
using namespace std;


set<vector<int>> s;
void getAllCombinations(vector<int>& arr, int target, int idx, vector<vector<int>>& ans, vector<int>& combination){
    if(idx == arr.size() || target < 0) return;
    
    if(target == 0){
        if(s.find(combination) == s.end()){
            ans.push_back(combination);
            s.insert(combination);
        }
        return;
    }


    combination.push_back(arr[idx]);
    // Single Inclusion
    getAllCombinations(arr, target-arr[idx], idx+1, ans, combination);
    // Multiple Inclusion
    getAllCombinations(arr, target-arr[idx], idx, ans, combination);
    
    combination.pop_back(); // Backtracking
    // Exclusion
    getAllCombinations(arr, target, idx+1, ans, combination);
}

vector<vector<int>> combinationSum(vector<int>& arr, int target) {
    vector<vector<int>> ans;
    vector<int> combination;
    int idx = 0;

    getAllCombinations(arr, target, idx, ans, combination);

    return ans;
}

int main(){
    
    return 0;
}