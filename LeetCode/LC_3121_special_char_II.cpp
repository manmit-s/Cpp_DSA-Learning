#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int numberOfSpecialChars(string word) {
        int n = word.length();
        int count = 0;

        vector<int> lastOccurenceSmall(26, -1);
        vector<int> firstOccurenceCapital(26, -1);
        
        for(int i = 0; i < n; i++){
            char ch = word[i];
            if(islower(ch)){
                lastOccurenceSmall[ch - 'a'] = i;
            }
            else{
                if(firstOccurenceCapital[ch - 'A'] == -1){
                    firstOccurenceCapital[ch - 'A'] = i;
                }
            }
        }

        for(int i = 0; i < 26; i++){
            if(lastOccurenceSmall[i] != -1 && firstOccurenceCapital[i] != -1 && lastOccurenceSmall[i] < firstOccurenceCapital[i]){
                count++;
            }
        }
        
        return count;
    }
};

int main(){
    Solution sol;
    cout << sol.numberOfSpecialChars("aaAbcBC") << endl; // Example test case
    return 0;
}