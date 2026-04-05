#include <iostream>
using namespace std;

int firstMatchingIndex(string s) {
    int ans = -1, n = s.size();
    for(int i = 0; i < n; i++){
        if(s[i] == s[n - i - 1]){
            ans = i;
            break;
        }
    }
    return ans;    
}

int main(){
    
    return 0;
}