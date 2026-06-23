#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    string processStr(string s) {
        if(s == "") return "";
        string result = "";
        for(char ch : s){
            if(ch == '#'){
                result += result;
            }
            else if(ch == '*'){
                if(!result.empty()) result.pop_back();
            }
            else if(ch == '%'){
                reverse(result.begin(), result.end());
            }
            else{
                result.push_back(ch);
            }
        }
        return result;
    }
};

int main(){
    Solution sol;

    // Test Case 1: Empty string input
    string input1 = "";
    string output1 = sol.processStr(input1);
    cout << "Input: \"" << input1 << "\", Output: \"" << output1 << "\"" << endl;

    // Test Case 2: Basic push_back
    string input2 = "abc";
    string output2 = sol.processStr(input2);
    cout << "Input: \"" << input2 << "\", Output: \"" << output2 << "\"" << endl;

    // Test Case 3: Pop_back
    string input3 = "ab*c";
    string output3 = sol.processStr(input3);
    cout << "Input: \"" << input3 << "\", Output: \"" << output3 << "\"" << endl;

    // Test Case 4: Duplicate
    string input4 = "a#";
    string output4 = sol.processStr(input4);
    cout << "Input: \"" << input4 << "\", Output: \"" << output4 << "\"" << endl;

    // Test Case 5: Reverse
    string input5 = "abc%";
    string output5 = sol.processStr(input5);
    cout << "Input: \"" << input5 << "\", Output: \"" << output5 << "\"" << endl;

    // Test Case 6: Combination
    string input6 = "ab#*c%";
    string output6 = sol.processStr(input6);
    cout << "Input: \"" << input6 << "\", Output: \"" << output6 << "\"" << endl;

    return 0;
}