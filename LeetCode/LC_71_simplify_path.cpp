#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

string simplifyPath(string path) {
    vector<string> st;
    stringstream ss(path);
    string temp;

    // '/' ke basis par string ko split kar rahe hain
    while(getline(ss, temp, '/')){
        if(temp == "" || temp == "."){
            continue; // Kuch nahi karna
        }
        if(temp == ".."){
            if(!st.empty()) st.pop_back(); // Go back to parent
        } 
        else{ 
            st.push_back(temp); // Valid directory name
        }
    }

    // Result build karna
    string ans = "";
    for (string s : st) {
        ans += "/" + s;
    }

    return ans.empty() ? "/" : ans;
}
int main(){

    return 0;
}