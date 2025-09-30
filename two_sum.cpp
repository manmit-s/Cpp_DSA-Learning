#include <iostream>
#include <vector>
#include<unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> m;
    vector<int> ans;

    for(int i = 0; i < nums.size(); i++){
        int first = nums[i], second = target - first;
        if(m.find(second) != m.end()){
            ans.push_back(i);
            ans.push_back(m[second]);
            break;
        }

        m[first] = i;
    }
    return ans;
}

void display(vector<int> array){
    for(int i = 0; i < array.size(); i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> num = {2, 7, 11, 15};
    int target = 9;

    display(twoSum(num, target));
    return 0;
}