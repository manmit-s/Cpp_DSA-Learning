#include <iostream>
using namespace std;

char isInverse(char ch){
    if(ch == ')') return '(';
    else if(ch == ']') return '[';
    else if(ch == '}') return '{';
    return '\0';
}

bool isValid(string s) {
    string ans;
    for(char ch : s){
        if(ch == '(' || ch == '[' || ch == '{'){
            ans.push_back(ch);
        }
        else{
            if(ans.empty() || ans.back() != isInverse(ch)){
                return false;
            }
            ans.pop_back();
        }
    }
    if(ans.empty()) return true;
    return false;
}

int main(){
    string s = "]";
    cout<<isValid(s);
    return 0;
}