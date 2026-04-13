#include <iostream>
using namespace std;

/* MY Version original */
// int lengthOfLastWord(string s) {
//     int i = s.size() - 1;
//     int count = 0;
    
//     while(i >= 0){
//         if(s[i] == ' '){
//             i--;
//             continue;
//         }
//         else{
//             count++;
//             i--;
//         }
//         if(s[i] == ' ') return count;
//     }   
//     return count; 
// }

/* More refined Version through AI logic was same just cleaner code */
int lengthOfLastWord(string s) {
    int i = s.size() - 1;
    int count = 0;
    
    while(i >= 0 && s[i] == ' ') i--;
    while(i >= 0 && s[i] != ' '){
        count++, i--;
    }
    return count;
}

int main(){
    string s = "luffy is still joyboy";
    cout<<lengthOfLastWord(s);
    return 0;
}