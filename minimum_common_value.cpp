#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

/* Very first hand approach */
// int getCommon(vector<int>& nums1, vector<int>& nums2) {
//     set<int> n1(nums1.begin(), nums1.end());
//     set<int> n2(nums2.begin(), nums2.end());

//     vector<int> intersection;
//     set_intersection(n1.begin(), n1.end(), n2.begin(), n2.end(), back_inserter(intersection));

//     if(intersection.empty()) return -1;

//     return intersection.front();
// }

/* 2 Pointer Approach */
int getCommon(vector<int>& nums1, vector<int>& nums2) {
    int i = 0, j = 0;
    while(i < nums1.size() && j < nums2.size()){
        if(nums1[i] == nums2[j]) return nums1[i];
        else if(nums1[i] < nums2[j]) i++;
        else j++;
    }
    return -1;
}

int main(){
    vector<int> nums1 = {1,3, 5, 6};
    vector<int> nums2 = {2,4,5, 7};

    int res = getCommon(nums1, nums2);
    cout<<res;
    return 0;
}