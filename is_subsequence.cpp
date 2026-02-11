#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isSubsequence(string s, string t) {
    int i = 0, j = 0;
    
    // s.size() < t.size() ? 
    while(j < t.size() && i < s.size()){
        if(s[i] == t[j]){
            i++, j++;
        }
        else{
            j++;
        }
    }
    return i == s.size();
}

int main(){
    string s = "ahc";
    string t = "ahbgdc";
    cout<<isSubsequence(s, t);
    return 0;
}