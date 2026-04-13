#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

/* Its already a good solution but we can still use a fix sized array */
/*
bool canConstruct(string ransomNote, string magazine) {
    unordered_map<char, int> charCount;
    for(char c : magazine){
        if(c != ' ') charCount[c]++;
    }

    for(char c : ransomNote){
        if(c != ' ' && charCount[c] > 0){
            charCount[c]--;
        }
        else{
            return false;
        }
    }
    return true;
}
*/

/* Initialized a fixed sized array and incremented/decremented using ASCII values */
// Time Complexity - O(m + n)
// Space Complexity - O(26) = O(1)
bool canConstruct(string ransomNote, string magazine) {
    vector<int> count(26, 0);
    for(char c : magazine){
        count[c - 'a']++;
    }
    for(char c : ransomNote){
        count[c - 'a']--;
        if(count[c - 'a'] < 0) return false;
    }
    return true;
}

int main(){
    
    return 0;
}