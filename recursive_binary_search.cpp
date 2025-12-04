#include <iostream>
#include <vector>
using namespace std;

//Time Complexity - O(log(n))
//Space Complexity - O(log(n))
int binarySearch(vector<int> arr, int target, int start, int end){
    if(start > end) return -1;
    int mid = start + (end - start)/2;
    if(arr[mid] == target) return mid;
    else if(target > arr[mid]) return binarySearch(arr, target, mid+1, end);
    else return binarySearch(arr, target, start, mid-1);
}

int main(){
    vector<int> a = {1,2,4,6};
    int target = 69;
    cout<<binarySearch(a, target, 0, a.size()-1)<<endl;
    return 0;
}