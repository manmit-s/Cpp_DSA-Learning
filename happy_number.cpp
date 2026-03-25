#include <iostream>
#include <unordered_set>
using namespace std;

int sumOfSquares(int n) {
    int sum = 0;
    
    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    
    return sum;
}

bool isHappy(int n) {
    int ans = n;
    unordered_set<int> seen;
    
    while(n != 1){
        if(seen.count(n)) return false;
        seen.insert(n);
        n = sumOfSquares(n);
    }
    return true;
}

int main(){
    cout<<sumOfSquares(19);
    return 0;
}