#include <iostream>
#include <unordered_map>
#include <climits>
using namespace std;

int firstUniqChar(string s) {
    unordered_map<char, int> charCount;
    for(char ch : s){
        if(ch != ' ') charCount[ch]++;
    }

    for(int i = 0; i < s.size(); i++){
        if(s[i] != ' ' && charCount[s[i]] == 1){
            return i;
        }
    }
    return -1;
}

int main(){
    
    return 0;
}