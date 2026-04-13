#include <iostream>
using namespace std;

int minOperations(string s) {
    int i = 1, n = s.size();
    //Precompute the actual solution
    int startWith0 = 0; // 0101010....
    int startWith1 = 0; // 1010101...
    for(int i = 0; i < n; i++){
        if(i%2 == 0){
            if(s[i] == '0') startWith1++;
        }
        else{
            if(s[i] == '1') startWith1++; 
        }
    }

    startWith0 = n - startWith1;
    return min(startWith0, startWith1);
}

int main(){
    
    return 0;
}