#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution {
private:
    stack<int> explodeNum(int num){
        stack<int> exploded;
        while(num > 0){
            exploded.push(num%10);
            num = num/10;
        }
        return exploded;
    }

public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++){
            stack<int> e = explodeNum(nums[i]);
            while(!e.empty()){
                ans.push_back(e.top());
                e.pop();
            }
        }
        return ans;
    }
};

int main(){
    
    return 0;
}