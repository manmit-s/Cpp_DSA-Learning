#include <iostream>
using namespace std;

class Solution {
private:
    int gcd(int a, int b){
        while (b != 0) {
            int rem = a % b;
            a = b;
            b = rem;
        }
    return a;
    }

public:
    int gcdOfOddEvenSums(int n) {
        return gcd(n*n, n*(n+1));
    }
};

int main(){
    
    return 0;
}