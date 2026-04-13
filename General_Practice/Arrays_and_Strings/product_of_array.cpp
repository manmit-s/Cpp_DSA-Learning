#include <iostream>
#include <vector>
using namespace std;

// vector<int> productExceptSelf(vector<int>& nums){
//     int n = nums.size();
//     vector <int> prefix(n, 1);
//     vector <int> suffix(n, 1);
//     vector <int> ans(n, 1);

//     for(int i = 1; i < n; i++){
//         prefix[i] = prefix[i - 1] * nums[i - 1];
//     }
//     for(int i = n-2; i >= 0; i--){
//         suffix[i] = suffix[i + 1] * nums[i + 1];
//     }
//     for(int i = 0; i < n; i++){
//         ans[i] = prefix[i] * suffix[i];
//     }

//     return ans;
// }

vector<int> productExceptSelf(vector<int>& nums) 
    {
        int size = nums.size();
        vector<int>result(size,1);    //here result array is not considered as an aditional space complexity
        int prefix=1,suffix=1;

        for(int i=0; i<size; i++)
        {
            if(i!=0)
            {
                prefix = nums[i-1]*prefix;
                suffix = nums[size-i]*suffix;
            }
            result[i] *= prefix;
            result[size-1-i] *= suffix;
        }
        return result;
    }

// vector<int> productExceptSelf(vector<int>& nums){
//         int n = nums.size();
//         vector <int> ans(n, 1);

//         for(int i = 1; i < n; i++){
//             ans[i] = ans[i - 1] * nums[i - 1];
//         }
//         int suffix = 1;
//         for(int i = n-2; i >= 0; i--){
//             suffix = suffix * nums[i + 1];
//             ans[i] *= suffix; 
//         }
//         return ans;
//     }

int main(){
    vector <int> nums = {1,2,3,4};
    vector <int> numProduct = productExceptSelf(nums);
    for(int val : numProduct){
        cout<<val<<" ";
    }
    return 0;
}