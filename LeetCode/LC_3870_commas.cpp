#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int countCommas(int n) {
        if(n < 1000) return 0;
        return n-999;
    }
};

int main(){
    Solution sol;
    cout<<sol.countCommas(23123); //checking
}