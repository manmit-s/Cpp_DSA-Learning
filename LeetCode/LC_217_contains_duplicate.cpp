#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> count;
        for(int num : nums){
            count[num]++;
        }

        bool flag = false;
        for(auto ele : count){
            if(ele.second > 1){
                flag = true;
                break;
            }
        }
        return flag;
    }
};

int main(){
    
    return 0;
}