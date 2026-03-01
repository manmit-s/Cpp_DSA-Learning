#include <iostream>
using namespace std;

#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

vector<int> solve_pattern(const vector<int>& nums, int start_parity) {
    int n = nums.size();
    int ops = 0;
    
    // Each element will have a set of possible values it can take
    // If parity is right: {nums[i]}
    // If parity is wrong: {nums[i]-1, nums[i]+1}
    vector<pair<int, int>> intervals;

    for (int i = 0; i < n; i++) {
        int target = (start_parity + i) % 2;
        int current = abs(nums[i]) % 2;

        if (current == target) {
            intervals.push_back({nums[i], nums[i]});
        } else {
            ops++;
            intervals.push_back({nums[i] - 1, nums[i] + 1});
        }
    }

    // Now find the minimum max-min range. 
    // Since each interval has at most 2 points, and n is small, 
    // the best 'min' value MUST be one of the values in our intervals.
    vector<int> candidates;
    for (auto& p : intervals) {
        candidates.push_back(p.first);
        candidates.push_back(p.second);
    }
    sort(candidates.begin(), candidates.end());
    candidates.erase(unique(candidates.begin(), candidates.end()), candidates.end());

    int min_range = 2e9; // Large value

    // For every possible value 'low' in our set, 
    // find the smallest 'high' such that every interval has a point in [low, high]
    for (int low : candidates) {
        int current_high = low;
        bool possible = true;
        for (auto& p : intervals) {
            if (p.second < low) { 
                // Both options (v-1, v+1) are smaller than our 'low'
                possible = false; 
                break; 
            }
            // Pick the smallest value in the interval that is >= low
            int best_val = (p.first >= low) ? p.first : p.second;
            current_high = max(current_high, best_val);
        }
        if (possible) {
            min_range = min(min_range, current_high - low);
        }
    }

    return {ops, min_range};
}

int main(){
    
    return 0;
}