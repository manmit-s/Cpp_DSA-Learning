#include <iostream>
#include <vector>
using namespace std;

//Time Complexity - O(n)
//Space Complexity - O(n)
bool isSorted(vector<int> arr, int n){
    if(n == 0 || n == 1) return true;

    return arr[n-1] >= arr[n-2] && isSorted(arr, n-1);
}

int main(){
    vector<int> a = {1,2,8,6};
    cout<<isSorted(a, a.size());
    return 0;
}