#include <iostream>
#include <unordered_map>
#include <unordered_set>
using namespace std;

/* UNORDERED MAP APPROACH */
// int numJewelsInStones(string jewels, string stones) {
//     unordered_map<char, int> jewCount;
//     for(char jew : jewels){
//         jewCount[jew]++;
//     }

//     int ans = 0;
//     for(char stone : stones){
//         if(jewCount[stone] != 0) ans++;
//     }
//     return ans;
// }

/* SET BASED APPROACH */
// Average TC - O(1) | Worst Case - O(n)
int numJewelsInStones(string jewels, string stones) {
    unordered_set<char> jewSet(jewels.begin(), jewels.end());
    
    int ans = 0;
    for(char stone : stones){
        //jewSet.count(element) would return total count of that element in the set 
        // So if the element is present count will be 1 else it would be 0 
        if(jewSet.count(stone)) ans++;
    }
    return ans;
}

int main(){
    string jewels = "aA";
    string stones = "aAAbbbbb";
    cout<<numJewelsInStones(jewels, stones);

    return 0;
}