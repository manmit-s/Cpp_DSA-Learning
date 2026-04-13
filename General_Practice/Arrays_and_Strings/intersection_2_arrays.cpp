#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    set <int> s1(nums1.begin(), nums1.end());
    set <int> s2(nums2.begin(), nums2.end());
    set<int> result;
    set_intersection(s1.begin(), s1.end(),
                     s2.begin(), s2.end(),
                     inserter(result, result.begin()));
    
    vector<int> ans(result.begin(), result.end());
    return ans;
}

int main(){
    //testing my set knowledge
    vector<int> n1 = {1,2,3,2,3,4};
    vector<int> n2 = {7,6,3,11,3,4};
    set<int> s1(n1.begin(), n1.end());
    set<int> s2(n2.begin(), n2.end());
    
    set<int> result;
    set_intersection(s1.begin(), s1.end(),
                     s2.begin(), s2.end(),
                    inserter(result, result.begin()));

    cout << "Intersection: ";
    for (auto i : result) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}