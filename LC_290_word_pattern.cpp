#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<string> convertToArray(string s){
    vector<string> ans; 
    string temp;
    for(int i = 0; i < s.size(); i++){
        if(s[i] != ' '){
            temp.push_back(s[i]);
        }
        else{
            if(!temp.empty()){
                ans.push_back(temp);
                temp = "";
            }
        }
    }
    if(!temp.empty()){
        ans.push_back(temp);
    }
    return ans;
}

bool wordPattern(string pattern, string s) {
    vector<string> sArray = convertToArray(s);
    if(pattern.size() != sArray.size()) return false;
    unordered_map<char, string> m1;
    unordered_map<string, char> m2;

    int n = pattern.size();
    for(int i = 0; i < n; i++){
        char ch = pattern[i];
        string str = sArray[i];

        if(m1.find(ch) != m1.end() && m1[ch] != str ||
           m2.find(str) != m2.end() && m2[str] != ch){
            return false;
        }
        m1[ch] = str;
        m2[str] = ch;
    }
    return true;
}

int main(){
    //Checking my custom helper function
    string s = "dog cat cat dog";
    vector<string> res = convertToArray(s);
    for(auto str : res){
        cout<<str<<"\t";
    }
    return 0;
}