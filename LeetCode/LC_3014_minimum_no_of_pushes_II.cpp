#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int minimumPushes(string word) {
        vector<int> map(26, 0);
        for(char &ch : word){
            map[ch - 'a']++;
        }
        sort(begin(map), end(map), greater<int>());

        int result = 0;
        for(int i = 0; i < 26; i++){
            int freq = map[i];
            int press = i/8 + 1;
            result += freq*press;
        }
        return result;
    }
};

int main(){
    
    return 0;
}