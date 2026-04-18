#include <iostream>
using namespace std;

class Solution {
public:
    int reverse(int n){
        int res = 0;
        while(n > 0){
            int lastDigit = n%10;
            res = lastDigit + 10*res;
            n /= 10;
        }
        return res;        
    }

    int mirrorDistance(int n) {
        return abs(n - reverse(n));
    }
};

int main(){
    
    return 0;
}