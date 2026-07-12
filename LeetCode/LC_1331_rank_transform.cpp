#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
// [37,12,28,9,100,56,80,5,12]
// [5, 9, 12, 12, 28, 37, 56, 80, 100]
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> sorted = arr;
        unordered_map<int, int> hashMap;
        sort(sorted.begin(), sorted.end());
        for(int i = 0; i < arr.size(); i++){
            if(i != 0 && sorted[i] == sorted[i-1]) continue;
            hashMap[sorted[i]] = hashMap.size() + 1;            
        }
        for(int i = 0; i < arr.size(); i++){
            arr[i] = hashMap[arr[i]];
        }
        return arr;
    }
};


int main(){
    
    return 0;
}