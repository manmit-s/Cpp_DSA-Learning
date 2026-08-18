#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int largestInteger(vector<int>& nums, int k){
        int n = nums.size();
        
        if (k == n){
            return *max_element(nums.begin(), nums.end());
        }
        
        if (k == 1){
            unordered_map<int, int> freq;
            for (int num : nums) freq[num]++;
            int result = -1;
            for (auto& p : freq){
                if (p.second == 1) result = max(result, p.first);
            }
            return result;
        }

        unordered_map<int, int> freq;
        for (int num : nums) freq[num]++;
        
        int result = -1;
        if (freq[nums[0]] == 1){
            result = max(result, nums[0]);
        }

        if (freq[nums[n-1]] == 1){
            result = max(result, nums[n-1]);
        }
        
        return result;
    }
};

int main(){

    return 0;
}