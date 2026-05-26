#include<iostream>
#include<unordered_set>
using namespace std;

class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_set<char> setChars(word.begin(), word.end());
        int count = 0;
        for(char ch : setChars){
            if(setChars.count(ch - 'a' + 'A')) count++;
        }
        return count;        
    }
};

int main(){

    return 0;
}