#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool isPalindrome(string s){
    string t = s;
    reverse(t.begin(), t.end());
    return s == t;
}

void getAllParts(string s, vector<vector<string>>& ans, vector<string>& validPartitions){
    int n = s.size();
    if(s == ""){
        ans.push_back(validPartitions);
        return;
    }

    for(int i = 0; i < n; i++){
        string part = s.substr(0, i+1);
        if(isPalindrome(part)){
            validPartitions.push_back(part);
            getAllParts(s.substr(i+1), ans, validPartitions);
            validPartitions.pop_back();
        }
    }
}

vector<vector<string>> partition(string s) {
    vector<vector<string>> ans;
    vector<string> validPartitions;

    getAllParts(s, ans, validPartitions);
    return ans;
}

int main(){
    
    return 0;
}