#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

// vector<int> minDistinctFreqPair(vector<int>& nums) {
//     if(nums.size() == 1) return {-1, -1};
    
//     unordered_map<int, int> countFreq;
//     for(int num : nums){
//         countFreq[num]++;
//     }
    
//     // Get sorted unique values
//     vector<int> uniqueVals;
//     for(auto it = countFreq.begin(); it != countFreq.end(); it++){
//         int val = it->first;
//         uniqueVals.push_back(val);
//     }
//     sort(uniqueVals.begin(), uniqueVals.end());
    
//     // Try each x starting from smallest
//     for(int i = 0; i < uniqueVals.size(); i++){
//         int fEl = uniqueVals[i];
//         int fElFreq = countFreq[fEl];
        
//         // Find smallest y > x with different frequency
//         for(int j = i + 1; j < uniqueVals.size(); j++){
//             int sEl = uniqueVals[j];
//             int sElFreq = countFreq[sEl];
            
//             if(fElFreq != sElFreq){
//                 return {fEl, sEl};
//             }
//         }
//     }
    
//     return {-1, -1};
// }

vector<int> minDistinctFreqPair(vector<int>& nums) {
    if(nums.size() < 2) return {-1, -1};

    unordered_map<int, int> freq;
    for(int num : nums) {
        freq[num]++;
    }

    vector<int> uniqueVals;
    for(auto &p : freq) {
        uniqueVals.push_back(p.first);
    }

    sort(uniqueVals.begin(), uniqueVals.end());

    for(int i = 0; i < uniqueVals.size(); i++) {
        for(int j = i + 1; j < uniqueVals.size(); j++) {
            if(freq[uniqueVals[i]] != freq[uniqueVals[j]]) {
                return {uniqueVals[i], uniqueVals[j]};
            }
        }
    }

    return {-1, -1};
}


int main(){
    
    return 0;
}