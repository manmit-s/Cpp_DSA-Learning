//LeetCode QS
// You are given an API bool isBadVersion(version) which returns whether version is bad. Implement a function to find the first bad version. You should minimize the number of calls to the API.

#include <iostream>
using namespace std;

bool isBadVersion(int version){

}
/* BRUTEFORCE METHOD TC - O(n) */
// int firstBadVersion(int n) {
//     int ans;
//     bool currentVersion = false, previousVersion;
//     for(int i = 1; i < n+1; i++){
//         previousVersion = currentVersion;
//         currentVersion = isBadVersion(i);
//         if(previousVersion == true && currentVersion == true){
//             ans = i - 1;
//             break;
//         }
//     }
//     return ans;
//     }

//AS PER THE QS API CALLS MUST BE MINIMUM SO THIS SOLN IS INDEED CORRECT BUT TOO MANY CALLS 
/* BINARY SEARCH TC - O(LOGn) */
int firstBadVersion(int n){
    int st = 1, end = n, ans;
    while(st <= end){
        int mid = st + (end - st)/2;
        if(isBadVersion(mid) == true && isBadVersion(mid - 1) == false){
            ans = mid;
            break;
        } //answer
        else if(isBadVersion(mid) == false) st = mid + 1;
        else if(isBadVersion(mid) == true && isBadVersion(mid-1) == true) end = mid - 1;
    }
    return ans;
}

/* FINAL OPTIMIZED TC - O(LOGn), API CALLS - 1 */
int firstBadVersion(int n){
    int st = 1, end = n;
    int ans = n; //worst case last version will be the bad version
    while(st <= end){
        int mid = st + (end - st)/2;
        bool badMid = isBadVersion(mid); // 1 API Call
        if(badMid){
            //  mid is bad: store it and search left for an earlier bad version.
            ans = mid;
            end = mid - 1;
        }
        else{
            //if mid is good version then the bad verion definitely lies in right space
            st = mid + 1;
        }
    }
    return ans;
}

int main(){
    
    return 0;
}