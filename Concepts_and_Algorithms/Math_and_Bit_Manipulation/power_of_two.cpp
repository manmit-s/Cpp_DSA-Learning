#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    if (n <= 0) return false;        // powers of two are positive
    if (n == 1) return true;         // base case
    if (n % 2 != 0) return false;    // must be divisible by 2
    return isPowerOfTwo(n / 2);      // recursive step
}


int main(){
    cout<<isPowerOfTwo(1);
    return 0;
}