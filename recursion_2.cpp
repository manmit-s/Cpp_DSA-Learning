#include <iostream>
using namespace std;

//Time Complexity - O(2^n)
//Space Complexity - O(n)
int fib(int n) {
    if(n == 1 || n == 0) return n;
    return (fib(n-1) + fib(n-2));
}

int main(){
    cout<<fib(4);
    return 0;
}