#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
private:
    bool checkTriangle(int x, int y, int z){
        if(z + y > x) return true;
        return false;
    }

public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int largestPeri = 0;
        
        for(int i = n - 1; i >= 2; i--){
            if(checkTriangle(nums[i], nums[i-1], nums[i-2])){
                largestPeri = nums[i] + nums[i-1] + nums[i-2];
                return largestPeri;
                // Found the largest, can exit early
            }
        }
        return 0;
    }
};

int main(){

    return 0;
}