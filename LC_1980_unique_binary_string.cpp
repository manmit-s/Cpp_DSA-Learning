#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

//Used Cantor’s Diagonal Argument --> Mathematics Concept
/*  from leetcode discussion
Iterate through the array, and for each number, check number['index of the number'] and append in ans the opposite of whats there.

This way, we will create a unique string which doesn't already exists in the vector.

eg:-

1101 -- 1011 -- 1000 -- 0110

0___-- 01_ -- 011_ -- 0111

0111 will be a new string
*/
string findDifferentBinaryString(vector<string>& nums) {
    int n = nums.size();
    string ans = "";
    for(int i = 0; i < n; i++){
        if(nums[i][i] == '0') ans += '1';
        else ans += '0';
    }
    return ans;
}

int main(){
    
    return 0;
}