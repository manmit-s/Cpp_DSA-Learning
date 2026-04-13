#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Initial Approach - TC - O(NlogN)--- sorting method
// int firstMissingPositive(vector<int>& nums) {
//     if(nums.empty()) return 1;
//     sort(nums.begin(), nums.end());
//     if(nums[0] != 1 && nums[0] > 1) return 1;
//     int i = 0, x = 1, n = nums.size();
//     while(i < n){
//         if(nums[i] == x) x++;
//         i++;
//     }
//     return x;
// }

// Index Mapping Approach
int firstMissingPositive(vector<int>& nums) {
    int n = nums.size(); //valid answer will lie in range [1, n+1] 
    
        // Correct jagah: number x ka index = x-1
        for(int i = 0; i < n; i++) {
            
            // Jab tak current number:
            // 1. Positive hai (> 0)
            // 2. Range mein hai (<= n) 
            // 3. Aur abhi sahi jagah pe nahi hai
            // Tab tak swap karte raho!
            
            while(nums[i] > 0 && 
                  nums[i] <= n && 
                  nums[nums[i] - 1] != nums[i]) {
                
                // nums[i] ko uski correct index pe bhejo
                // nums[i] - 1 = correct index for nums[i]
                swap(nums[i], nums[nums[i] - 1]);
            }
        }
        
        // Step 2: "Missing Dhundho" - Pehli galat jagah check karo
        for(int i = 0; i < n; i++) {
            // Agar index i pe number i+1 nahi hai
            // Toh yahi first missing positive hai!
            if(nums[i] != i + 1) {
                return i + 1;
            }
        }
        
        // Agar sab sahi hai [1,2,3..n]
        // Toh answer n+1 hai
        return n + 1;
    }

int main(){
    vector<int> nums = {-3, -1, 0, 2};
    cout<<firstMissingPositive(nums);
    return 0;
}