#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int seqSum = nums[0], n = nums.size();
        unordered_set<int> st(begin(nums), end(nums));
        for(int j = 1; j < n; j++){
            if(nums[j] == nums[j-1] + 1){
                seqSum += nums[j];
            }
            else break;
        }
        while(st.count(seqSum)){
            seqSum++;
        }
        return seqSum;
    }
};

int main(){
    
    return 0;
}