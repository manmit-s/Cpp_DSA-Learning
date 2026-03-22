#include <iostream>
#include <unordered_map>
using namespace std;

int romanToInt(string s) {
    unordered_map<char, int> romanAndInt{
        {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, 
        {'C', 100}, {'D', 500}, {'M', 1000}
    };
    int n = s.size(), i = 0;
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(i < n-1 && (romanAndInt[s[i]] < romanAndInt[s[i+1]])){
            ans -= romanAndInt[s[i]]; 
        }
        else{
            ans += romanAndInt[s[i]];
        }
    }
    return ans;
}

int main(){
    
    return 0;
}