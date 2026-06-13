#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// Input: words = ["abcd","def","xyz"], weights = [5,3,12,14,1,2,3,2,10,6,6,9,7,8,7,10,8,9,6,9,9,8,3,7,7,2]

// Output: "rij"

class Solution {
public:
    unordered_map<int, char> reverseMapping = {
        {0, 'z'}, {1, 'y'}, {2, 'x'}, {3, 'w'}, {4, 'v'}, {5, 'u'}, {6, 't'}, {7, 's'}, 
        {8, 'r'}, {9, 'q'}, {10, 'p'}, {11, 'o'}, {12, 'n'}, {13, 'm'}, {14, 'l'}, {15, 'k'}, 
        {16, 'j'}, {17, 'i'}, {18, 'h'}, {19, 'g'}, {20, 'f'}, {21, 'e'}, {22, 'd'}, {23, 'c'}, {24, 'b'}, {25, 'a'}};

    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        int numStrings = words.size();
        string result = "";
        
        for(int i = 0; i < numStrings; i++){
            int sumChars = 0;
            for(int j = 0; j < words[i].size(); j++){
                sumChars += weights[words[i][j] - 'a'];
            }
            result.push_back(reverseMapping[sumChars % 26]);
        }
        return result;
    }
};

int main(){
    
    return 0;
}