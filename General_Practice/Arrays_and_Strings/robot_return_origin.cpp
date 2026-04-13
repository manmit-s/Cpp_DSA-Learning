#include <iostream>
#include <unordered_map>
using namespace std;


/* Unordered Map --> Extra Space */
// bool judgeCircle(string moves){
//     unordered_map<char, int> charCount = {
//                                         {'U', 0},
//                                         {'D', 0},
//                                         {'L', 0},
//                                         {'R', 0}};
//     for(int i = 0; i < moves.size(); i++){
//         charCount[moves[i]]++;
//     }
//     if(charCount['U'] == charCount['D'] && charCount['L'] == charCount['R']) return true;
//     return false;
// }

/* No Hash Map Used --> Space Complexity O(1) */
bool judgeCircle(string moves){
    int x = 0, y = 0;
    for(char move : moves){
        if(move == 'U') y++;
        else if(move == 'D') y--;
        else if(move == 'R') x++;
        else if(move == 'L') x--;
    }
    if(x == 0 && y == 0) return true;
    return false;
}

int main(){
    string moves = "LR";
    cout<<judgeCircle(moves);
    return 0;
}