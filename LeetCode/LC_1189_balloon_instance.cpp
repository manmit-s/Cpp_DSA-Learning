#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> letterCount;
        for(char ch : text){
            letterCount[ch]++;
        }
        int instanceCount = 0;

        while(letterCount['b'] >= 1 && letterCount['a'] >= 1 && letterCount['l'] >= 2 && letterCount['o'] >= 2 && letterCount['n'] >= 1){
            letterCount['b']--, letterCount['a']--, letterCount['n']--;
            letterCount['l'] -= 2, letterCount['o'] -= 2;
            instanceCount++;
        }
        return instanceCount;
    }
};


int main(){
    Solution sol;

    struct TestCase { string text; int expected; };
    TestCase tests[] = {
        {"nlaebolko",               1},  // single "balloon" scrambled
        {"loonbalxballpoon",        2},  // two balloons
        {"leetcode",                0},  // missing all letters
        {"",                        0},  // empty string
        {"balloon",                 1},  // exact one
        {"balloonballoonballoon",   3},  // three exact
        {"bbaall",                  0},  // missing o, n
        {"balon",                   0},  // missing l, o
        {"lloo",                    0},  // no b/a/n
        {"bbbbbbbb",                0},  // only b's
        {"bbaallllooonn",           1},  // b:2 a:2 l:4 o:2 n:2 -> min = 1
        {"balloonballoon",          2},
        {"BalloON",                 0},  // case-sensitive
        {"nnbbaalllloonn",          1},  // b:2 a:2 l:3 o:2 n:2 -> min(2,2,1,1,2)=1
        {"balloonloon",             1},  // one full balloon + leftovers
        {"loonbalxballpoonabcd",    2},  // extra noise chars
    };

    bool allPass = true;
    for (int i = 0; i < (int)(sizeof(tests)/sizeof(tests[0])); i++) {
        int got = sol.maxNumberOfBalloons(tests[i].text);
        bool ok = (got == tests[i].expected);
        if (!ok) allPass = false;
        cout << "Test " << i+1
             << " text=\"" << tests[i].text << "\""
             << " expected=" << tests[i].expected
             << " got=" << got
             << (ok ? "  PASS" : "  FAIL") << "\n";
    }
    cout << (allPass ? "All tests passed." : "Some tests FAILED.") << "\n";
    return 0;
}