#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

double calcMedian(vector<int>& sortedArray){
    int n = sortedArray.size();
    if(n % 2 != 0){
        return sortedArray[(n-1)/2];
    }
    double avg = (sortedArray[n/2] + sortedArray[n/2 - 1])/2.0;
    return avg;
}

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    
    nums1.insert(nums1.end(), nums2.begin(), nums2.end());
    sort(nums1.begin(), nums1.end());
    return calcMedian(nums1);
}

int main(){
    vector<int> nums1 = {1,2}, nums2 = {3, 4};
    cout<<findMedianSortedArrays(nums1, nums2);
    return 0;
}