#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int minEatingSpeed(vector<int>& piles, int h) {
    int lastBound = *max_element(piles.begin(), piles.end());

    int s = 1, e = lastBound, ans = lastBound;
    while(s <= e){
        int mid = s + (e - s)/2;
        long long sum_of_hr = 0;
        for(int x : piles){
            sum_of_hr += ceil((double)x/mid);
        }
        if(sum_of_hr <= h){
            ans = min(mid, ans);
            e = mid - 1;
        }
        else s = mid + 1;
    }
    return ans;
}

int main(){
    vector<int> piles = {3,6,7,11};
    int lastBound = *max_element(piles.begin(), piles.end());
    // cout<<ceil((double)3/6);
    return 0;
}