#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    vector<bool> boolRes;
    boolRes.reserve(candies.size());

    int maxNum = *max_element(candies.begin(), candies.end());

    for(int i = 0; i < candies.size(); i++){ 
        if(candies[i] + extraCandies >= maxNum){
            boolRes.push_back(true);
        }
        else boolRes.push_back(false);
    }
    return boolRes;
}

int main(){
    vector<int> candies = {2,3,5,1,3};
    int extraCandies = 3;
    vector<bool> res = kidsWithCandies(candies, extraCandies);

    for(auto x : res){
        cout<<x<<", ";
    }
    return 0;
}