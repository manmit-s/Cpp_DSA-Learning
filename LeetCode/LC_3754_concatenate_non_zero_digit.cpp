#include <iostream>
using namespace std;

class Solution {
private:
    long long extractNonZeroDigits(int n){
        string s = to_string(n);
        long long x = 0;
        for(char ch : s){
            if(ch != '0'){
                x = x*10 + (ch - '0');
            }
        }
        return x;
    }

    int sumOfDigits(int n){
        int sum = 0;
        while(n > 0){
            int ld = n%10;
            sum += ld;
            n /= 10;
        }
        return sum;
    }

public:
    long long sumAndMultiply(int n) {
        long long x = extractNonZeroDigits(n);
        int p = sumOfDigits(x);
        return p*x;
    }
};

int main(){
    Solution sol;
    int n;
    cout << "Enter a number: ";
    cin >> n;
    long long result = sol.sumAndMultiply(n);
    cout << "Result: " << result << endl;
    return 0;
}