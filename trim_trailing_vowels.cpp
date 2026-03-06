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


// string trimTrailingVowels(string s) {
//     string ans = "";
//     bool flag = false;
//     for(int i = 1; i < s.size(); i++){
//         //character is repeated vowel
//         if(isVowel(s[i]) && flag){
//             s.pop_back();
//             flag = !flag; //turn flag false
//         }
//         // character is not vowel
//         else if(!isVowel(s[i])){
//             s.push_back(s[i]);
//             flag = false; //turn flag false
//         }
//         // character is vowel
//         else{
//             s.push_back(s[i]);
//             flag = !flag //turn flag true
//         }
//     }
// }

int main(){
    
    return 0;
}