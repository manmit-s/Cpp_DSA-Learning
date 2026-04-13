#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    unordered_map<int, int> freq;
    for(int x : nums1){
        freq[x]++;
    }

    vector<int> result;
    for(int x : nums2){
        if(freq[x] > 0){
            result.push_back(x);
        }
        freq[x]--;
    }
    return result;
}

int main(){
    
    return 0;
}