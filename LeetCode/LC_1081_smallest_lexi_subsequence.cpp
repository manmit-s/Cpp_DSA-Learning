#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution {
private:
    vector<int> getLastIdx(string s){
        vector<int> lastIdx(26, -1);
        for(int i = 0; i < s.size(); i++){
            lastIdx[s[i] - 'a'] = i; 
        }
        return lastIdx;
    }

public:
    string smallestSubsequence(string s) {
        vector<int> lastIdx = getLastIdx(s);
        vector<bool> visited(26, false);
        stack<char> st;
        string ans;
        for(int i = 0; i < s.size(); i++){
            char ch = s[i]; 
            if(visited[ch - 'a']) continue;
            while(!st.empty() && ch < st.top() && lastIdx[st.top() - 'a'] > i){
                visited[st.top() - 'a'] = false;
                st.pop();
            }
            st.push(ch);
            visited[ch - 'a'] = true;
        }
        while(!st.empty()){
            ans.insert(ans.begin(), st.top());
            st.pop();
        }
        return ans;
    }
};

int main(){
    
    return 0;
}