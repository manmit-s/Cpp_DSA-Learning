#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
using namespace std;

string removeDuplicates(string s) {
    string result;
    //Think result as a STACK 
    /*
    a → push → a
    b → push → ab
    b → matches top → pop → a
    a → matches top → pop → ""
    c → push → c
    a → push → ca
    */
    for(char c : s){
        if(!result.empty() && result.back() == c){
            result.pop_back();
        }
        else{
            result.push_back(c);
        }
    }
    return result;
}

int main(){
    
    return 0;
}