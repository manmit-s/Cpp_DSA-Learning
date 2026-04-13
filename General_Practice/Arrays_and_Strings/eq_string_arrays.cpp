#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
    string w1 = "", w2 = "";
    for(string str : word1){
        w1.append(str);
    }
    for(string str : word2){
        w2.append(str);
    }
    return w1 == w2;
}

int main(){
    vector<string> word1 = {"a", "cb"}, word2 = {"a", "bc"};
    cout<<arrayStringsAreEqual(word1, word2);
    return 0;
}