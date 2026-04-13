#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

//Brute Force Approach
int subarraySum_BruteForce(vector<int>& nums, int k) {  // Time Complexuty - O(n*n)
    int count = 0;
    int n = nums.size();
    for(int i = 0; i < n; i++){ //start pointer
        int sum = 0;
        for(int j = i; j < n; j++){ //end pointer
            sum += nums[j];
            if(sum == k) count++;
        }
    }
    return count;
}

//Optimal Approach
int subarraySum(vector<int>& nums, int k) {
    int n = nums.size();
    int count = 0;
    unordered_map<int, int> m;
    vector<int> prefixSum(n, 0);

    prefixSum[0] = nums[0];
    for(int i = 1; i < n; i++){
        prefixSum[i] = prefixSum[i - 1] + nums[i]; 
    }

    for(int j = 0; j < n; j++){
        if(prefixSum[j] == k) count++;

        int val = prefixSum[j] - k;
        if(m.find(val) != m.end()){
            count += m[val];
        }
        
        if(m.find(prefixSum[j]) == m.end()){
            m[prefixSum[j]] = 0;
        }
        m[prefixSum[j]]++;
    }

    return count;
}


int main(){
    
    return 0;
}