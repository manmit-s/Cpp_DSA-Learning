#include <iostream>
#include <vector>
using namespace std;

vector<int> getConcatenation(vector<int>& nums) {
    vector<int> result = nums;
    result.insert(result.end(), result.begin(), result.end());
    return result;
}

int main(){
    vector<int> nums = {1, 2, 3, 4}, final;
    final = getConcatenation(nums);
    for(int x : final){
        cout<<x<<"\t";
    }
    return 0;
}