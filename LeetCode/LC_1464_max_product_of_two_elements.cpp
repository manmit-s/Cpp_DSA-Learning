#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxNum = INT_MIN;
        int secondMaxNum = INT_MIN;
        for(int num : nums){
            if(num >= maxNum){
                secondMaxNum = maxNum;
                maxNum = num;
            }
            else if(num > secondMaxNum && num < maxNum){
                secondMaxNum = num;
            }
        }
        return (maxNum-1)*(secondMaxNum-1);
    }
};


int main(){
    
    return 0;
}