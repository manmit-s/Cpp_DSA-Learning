#include <iostream>
using namespace std;

int strStr(string haystack, string needle) {
    int n = haystack.size(), m = needle.size();

    for(int i = 0; i <= n-m; i++){
        if(haystack.substr(i, m) == needle){
            return i;
        }
    }
    return -1;
}

int main(){
    
    return 0;
}