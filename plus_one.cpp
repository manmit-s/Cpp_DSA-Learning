#include <iostream>
#include <vector>
using namespace std;

vector<int> plusOne(vector<int>& digits) {
    int n = digits.size();
    
    //Traverse from backwards
    for(int i = n-1; i >= 0; i--){
        if(digits[i] < 9){
            digits[i]++;
            return digits;
        }
        digits[i] = 0;
    }

    //edge case when all digits are 9
    digits.insert(digits.begin(), 1);
    return digits;
}

int main(){
    vector<int> digits = {4,3,2,9};
    vector<int> res = plusOne(digits);
    for(int x : res){
        cout<<x<<" ";
    }
    return 0;
}