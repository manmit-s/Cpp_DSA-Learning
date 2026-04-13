#include <iostream>
using namespace std;

string mergeAlternately(string w1, string w2) {
    int i = 0, j = 0;
    int n1 = w1.size(), n2 = w2.size();

    string ans;
    while(i < n1 && j < n2){
        ans.push_back(w1[i++]);
        ans.push_back(w2[j++]);
    }
    if(i == n1) ans += w2.substr(j, n2);
    else ans += w1.substr(i, n1);

    return ans;
}

int main(){
    
    return 0;
}