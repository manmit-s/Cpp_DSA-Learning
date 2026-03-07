#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

bool isVowel(char ch) {
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}
string removeTrailingVowels(string s) {
    int i = s.size() - 1;
    while (i >= 0 && isVowel(s[i])) {
        i--; // move left while last char is vowel
    }
    return s.substr(0, i + 1); // keep everything up to i
}

int main(){
    
    return 0;
}