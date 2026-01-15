#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int shipWithinDays(vector<int>& weights, int days) {
    int s = *max_element(weights.begin(), weights.end());
    int e = accumulate(weights.begin(), weights.end(), 0);

    int ans = e;

    while(s <= e){
        int mid = s + (e - s)/2;
        int sum_of_weights = 0, days_sum = 1;
        for(int x : weights){
            if(sum_of_weights + x > mid){
                days_sum++;
                sum_of_weights = 0; //reset the sum to zero for the next day
            }
            sum_of_weights += x;
        }
        if(days_sum > days){
            s = mid + 1;
        }
        else{
            ans = mid;
            e = mid - 1;
        }
    }
    
    return ans;
}

int main(){
    
    return 0;
}