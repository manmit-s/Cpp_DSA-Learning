#include <iostream>
using namespace std;

string removeOccurrences(string s, string part) {
    while(s.length() > 0 && (s.find(part) < s.length())){
        s.erase(s.find(part), part.length());
    }
    return s;
}

int main(){
    // str.find(word) --> returns the first index of the first occurence of the word in the string "str"
    // str.erase(start, length) --> erases the characters from a string from start index to the length we want to be removed

    string s = "daabcbaabcbc";
    string part = "abc"; //after removing all part we will get "dab"
    
    cout<<removeOccurrences(s, part)<<endl;
    
    return 0;
}