#include <iostream>
#include <vector>
using namespace std;

int scoreDifference(vector<int>& nums) {
    int p1 = 0, p2 = 0;
    bool flag = true;

    for (int i = 0; i < nums.size(); i++){
        if(nums[i] % 2 != 0) flag = !flag;
        if(((i+1) % 6 == 0)) flag = !flag;
        if(flag) p1+=nums[i];
        else p2+=nums[i];
    }
    return p1 - p2;
}

int main(){
    
    return 0;
}