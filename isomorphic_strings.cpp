#include <iostream>
#include <unordered_map>
using namespace std;

bool isIsomorphic(string s, string t) {
    if(s.size() != t.size()) return false;
    unordered_map<char, char> m1;
    unordered_map<char, char> m2;

    int n = s.size();
    for(int i = 0; i < n; i++){
        char ch1 = s[i];
        char ch2 = t[i];
        if(m1.find(ch1) != m1.end() && m1[ch1] != ch2 ||
           m2.find(ch2) != m2.end() && m2[ch2] != ch1){
            return false;
        }
        m1[ch1] = ch2;
        m2[ch2] = ch1;
    }
    return true;
}

int main(){
    
    return 0;
}