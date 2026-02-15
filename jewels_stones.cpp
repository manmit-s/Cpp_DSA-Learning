#include <iostream>
#include <unordered_map>
using namespace std;

int numJewelsInStones(string jewels, string stones) {
    unordered_map<char, int> jewCount;
    for(char jew : jewels){
        jewCount[jew]++;
    }

    int ans = 0;
    for(char stone : stones){
        if(jewCount[stone] != 0) ans++;
    }
    return ans;
}

int main(){
    string jewels = "z";
    string stones = "ZZ";
    cout<<numJewelsInStones(jewels, stones);

    return 0;
}