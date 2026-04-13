#include <iostream>
using namespace std;
/* Tried 2 pointer approach and failed */
// bool backspaceCompare(string s, string t) {
//     if(s.size() != t.size()) return false;
//     int i = 0, j = 0;
//     int n = s.size();
//     while(i < n && j < n){
//         if(s[i] == t[i]){
//             i++, j++;
//         }
//         else{
//             i++, j++;
//             if(s[i] == '#' && t[i] == '#'){
//                 i -= 2, j -= 2;
//             }
//             else return false;
//         }
//     }        
//     return true;
// }

/* Using Stack based approach */
bool backspaceCompare(string s, string t) {
    if(s.size() != t.size()) return false;
    string one, two;
    for(char ch : s){
        if(ch != '#') one.push_back(ch);
        else if(one.empty()) continue;
        else one.pop_back();
    }
    for(char ch : t){
        if(ch != '#') two.push_back(ch);
        else if(two.empty()) continue;
        else two.pop_back();
    }
    return one == two;
}

int main(){
    string s = "a##c", t = "#a#c";
    cout<<backspaceCompare(s, t);
    return 0;
}