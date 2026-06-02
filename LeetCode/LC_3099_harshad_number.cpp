#include <iostream>
using namespace std;

class Solution {
private:
    int sumOfDigits(int n){
        int sum = 0;
        while(n > 0){
            int ld = n%10;
            sum += ld;
            n/=10;
        }
        return sum;
    }

public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int n = sumOfDigits(x);
        return (x%n==0) ? n : -1;
    }
};

int main(){
    
    return 0;
}