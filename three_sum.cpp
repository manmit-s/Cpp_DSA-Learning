#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;
    int n = nums.size();

    for(int i = 0; i < n; i++){
        if(i > 0 && nums[i] == nums[i-1]) continue;
        int j = i + 1, k = n-1;
        while(j < k){
            int sum = nums[i] + nums[j] + nums[k];

            if(sum == 0){
                ans.push_back({nums[i], nums[j], nums[k]});
                j++, k--;

                while(j < k && nums[j] == nums[j-1]) j++;
            }

            else if(sum <= 0) j++;
            else k--;

        }
    }
    return ans;
}

void display(vector<vector<int>> arr){
    int m = arr.size(), n = arr[0].size();
    for(int i = 0; i < m; i++){
        printf("{");
        for(int j = 0; j < n; j++){
            printf("%d\t", arr[i][j]);
        }
        printf("}\n");
    }
}

int main(){
    vector<int> nums = {-1,0,1,2,-1,-4};
    display(threeSum(nums));
    return 0;
}