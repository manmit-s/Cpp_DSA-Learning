#include <iostream>
#include <vector>
using namespace std;

vector<int> runningSum(vector<int>& nums) {
    vector<int> result;
    int sum = 0;
    for(int num : nums){
        sum += num;
        result.push_back(sum);
    }  
    return result;     
}

int main(){
    vector<int> nums = {1, 2, 3, 4};
    vector<int> res = runningSum(nums);
    for(int x : res){
        cout<<x<<" ";
    }
    return 0;
}