#include <iostream>
using namespace std;

class Solution {
private:
    int finalSum(int n){
        //digit sum and product
        int sum = 0;
        int product = 1;
        while(n > 0){
            int ld = n%10;
            sum += ld;
            product *= ld;
            n/=10;
        }
        return sum+product;
    }

public:
    bool checkDivisibility(int n) {
        int sumValue = finalSum(n);
        return (n%sumValue == 0) ? true : false;
    }
};

int main(){
    Solution sol;
    //checking the function
    // cout<<sol.finalSum(23)<<endl;
    return 0;
}