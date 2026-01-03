/*
Example 1:
Input: s = "abcd", k = 2
Output: "bacd"
Explanation:​​​​​​​
The first k = 2 characters "ab" are reversed to "ba". The final resulting string is "bacd".
Example 2:
Input: s = "xyz", k = 3
Output: "zyx"
Explanation:
The first k = 3 characters "xyz" are reversed to "zyx". The final resulting string is "zyx".
Example 3:
Input: s = "hey", k = 1
Output: "hey"
Explanation:
The first k = 1 character "h" remains unchanged on reversal. The final resulting string is "hey".©leetcode
*/

#include <iostream>
#include <algorithm>
using namespace std;

string reversePrefix(string s, int k) {
    if(k > s.size()) return s;
    reverse(s.begin(), s.begin() + k);
    return s;      
}

int main(){
    string s = "Hello";
    int k = 3;
    string final = reversePrefix(s, k);
    cout<<final<<endl;
    return 0;
}