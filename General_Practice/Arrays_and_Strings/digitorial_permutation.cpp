#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int factorial(int x) {
    static vector<int> fact = {1,1,2,6,24,120,720,5040,40320,362880};
    return fact[x];
}

bool isDigitorialPermutation(int n) {
    string original = to_string(n);

    // Compute the factorial
    int sum = 0;
    for(char ch : original){
        sum += factorial(ch - '0');
    }

    string target = to_string(sum);

    //check for length od strings for early comparison
    if(original.size() != target.size()) return false;

    //Sort them 
    sort(original.begin(), original.end());
    sort(target.begin(), target.end());

    return original == target;
}


int main(){
    
    return 0;
}