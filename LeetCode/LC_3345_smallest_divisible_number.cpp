#include <iostream>
using namespace std;

class Solution {
private:
    int digitProduct(int n){
        int prod = 1;
        while(n>0){
            int ld = n % 10;
            prod *= ld;
            n /= 10;
        }
        return prod;
    }
public:
    int smallestNumber(int n, int t) {
        while(digitProduct(n) % t != 0) n++;
        return n;
    }
};

int main(){
    
    return 0;
}