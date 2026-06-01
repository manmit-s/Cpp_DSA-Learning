#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
private:
    int digitSum(int n){
        int sum = 0;
        while(n > 0){
            int ld = n%10;
            sum += ld;
            n/=10;
        }
        return sum;
    }

public:
    int minElement(vector<int>& nums) {
        // vector<int> transformedArray;
        int minElement = nums[0];
        for(int n : nums){
            // transformedArray.push_back(digitSum(n));
            minElement = min(minElement, digitSum(n));
        }
        // auto min = min_element(transformedArray.begin(), transformedArray.end());
        // return *min;
        return minElement;
    }
};

int main(){
    
    return 0;
}