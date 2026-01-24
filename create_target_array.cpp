#include <iostream>
#include <vector>
using namespace std;

vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
    vector<int> target;
    //the insert fn shifts the rest of the elements to the right
    for(int i = 0; i < nums.size(); i++){
        target.insert(target.begin() + index[i], nums[i]);
    }

    return target;
}


int main(){
    
    return 0;
}