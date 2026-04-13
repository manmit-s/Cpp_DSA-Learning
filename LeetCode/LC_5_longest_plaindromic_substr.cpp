#include <iostream>
#include <climits>
using namespace std;

bool isPalindrome(string& s, int i, int j){
    if(i >= j) return true;

    if(s[i] == s[j]) return isPalindrome(s, i+1, j-1);
    return false; 
}

string longestPalindrome(string s) {
    int n = s.length();
    int maxLen = INT_MIN, startPoint = 0; 

    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            if(isPalindrome(s, i, j)){
                if(j - i + 1 > maxLen){
                    maxLen = j-i+1;
                    startPoint = i;
                }
            }
        }
    }
    return s.substr(startPoint, maxLen);
}

int main(){
    
    return 0;
}