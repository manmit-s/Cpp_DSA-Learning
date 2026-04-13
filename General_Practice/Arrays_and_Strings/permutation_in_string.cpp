#include <iostream>
using namespace std;

bool isSameFreq(int a1[], int a2[]){
    for(int i = 0; i < 26; i++){
        if(a1[i] != a2[i]){
            return false;
        }
    }
    return true;
}

bool checkInclusion(string s1, string s2){
    int freq[26] = {0};
    for(int i = 0; i < s1.length(); i++){
        int idx = s1[i] - 'a';
        freq[idx]++;
    }

    int windowSize = s1.length();
    for(int i = 0; i < s2.length(); i++){
        int windIdx = 0, idx = i;
        int windFreq[26] = {0};

        while(windIdx < windowSize && idx < s2.length()){
            windFreq[s2[idx] - 'a']++;
            windIdx++; idx++;
        }
        if(isSameFreq(freq, windFreq)) return true;
    }
    return false;
}

int main(){
    string s1 = "ab";
    string s2 = "eidbaooo";
    cout<<checkInclusion(s1, s2)<<endl;

    return 0;
}