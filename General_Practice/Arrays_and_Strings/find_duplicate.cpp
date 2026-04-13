#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

//Using Unordered Set --> TC - O(n) , SC - O(n)...(because we are using set)
// int findDuplicate(vector<int>& nums) {
//     unordered_set<int> s;

//     for(int i = 0; i < nums.size(); i++){
//         int x = nums[i];
//         if(s.find(x) != s.end()){
//             return x;
//         }
//         s.insert(x);
//     }
//     return -1;
// }

// Using Slow Fast Approach --> TC - O(n), SC - O(1)
int findDuplicate(vector<int>& arr) {
    int slow = arr[0], fast = arr[0];

    do{
        slow = arr[slow]; // moved by 1 place
        fast = arr[arr[fast]]; //moved by 2 place
    }while(slow != fast);
    
    slow = arr[0];
    while(slow != fast){
        slow = arr[slow]; // moved by 1 place
        fast = arr[fast]; //moved by 1 place
    }
    return slow;
}

int main(){
    
    return 0;
}