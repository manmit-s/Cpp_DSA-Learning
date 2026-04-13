#include <iostream>
#include <vector>
using namespace std;

// int numOfDigits(int num){
//     int count = 0;
//     while(num > 0){
//         count++;
//         num /= 10;
//     }
//     return count;
// }

// int findNumbers(vector<int>& nums) {
//     int count = 0;
//     for(int x : nums){
//         if(numOfDigits(x) % 2 == 0) count++;
//     }
//     return count;
// }

//Best soln as per the constraints provided by the qs

int findNumbers(vector<int>& nums) {
    int count = 0;
    for(int x : nums){
        if(x < 100 && x > 9) count++;
        else if(x < 10000 && x > 999) count++;
        else if(x == 100000) count++;
    }
    return count;
}

int main(){
    vector<int> nums = {12,345,2,6,7896};
    int res = findNumbers(nums);
    cout<<res;
    return 0;

}