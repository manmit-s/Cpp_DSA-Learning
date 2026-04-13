#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

/* Space Complexity --> O(2n) --> O(n) */
// int minFlips(string s) {
//     int n = s.length();

//     s = (s + s); //doubling for the sake of sliding window

//     // precompute the solutions we know
//     //01010101....
//     //10101010....
//     string s1, s2;
//     for(int i = 0; i < 2*n; i++){
//         s1 += (i%2 ? '0' : '1');
//         s2 += (i%2 ? '1' : '0');
//     }


//     //Basic template for sliding window
//     int result = INT_MAX;
//     int flip1 = 0, flip2 = 0;

//     int i = 0, j = 0; //these will point to start and end of the slinding window
//     while(j < 2*n){
//         if(s[j] != s1[j]) flip1++;
//         if(s[j] != s2[j]) flip2++;

//         if(j-i+1 > n){
//             if(s[i] != s1[i]) flip1--;
//             if(s[i] != s2[i]) flip2--;
//             i++;
//         }
//         if(j-i+1 == n){
//             result = min({flip1, flip2, result});
//         }
//         j++;
//     }
//     return result;
// }

/* Space Complexity --> O(n) */
int minFlips(string s) {
    int n = s.length();

    // s = (s + s); //we dont need this we can achieve it by circular iteration 

    /*
    No need to make separate arrays for the sake precomputation of solution
    */


    //Basic template for sliding window
    int result = INT_MAX;
    int flip1 = 0, flip2 = 0;

    int i = 0, j = 0; //these will point to start and end of the slinding window
    while(j < 2*n){
        char expectedChar1 = (j%2 ? '0' : '1');
        char expectedChar2 = (j%2 ? '1' : '0');
        if(s[j%n] != expectedChar1) flip1++;
        if(s[j%n] != expectedChar2) flip2++;

        if(j-i+1 > n){ //shrink the window from left side
            expectedChar1 = (i%2 ? '0' : '1');
            expectedChar2 = (i%2 ? '1' : '0');
            if(s[i%n] != expectedChar1) flip1--;
            if(s[i%n] != expectedChar2) flip2--;
            i++;
        }

        if(j-i+1 == n){
            result = min({flip1, flip2, result});
        }
        j++;
    }
    return result;
}

int main(){
    
    return 0;
}