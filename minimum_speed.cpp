#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int minSpeedOnTime(vector<int>& dist, double hour) {
    int s = 1, e = 1e7, ans = -1;
    while(s <= e){
        int mid = s + (e - s)/2;
        long double sum_of_hr = 0;
        for(int i = 0; i < dist.size(); i++) {
            if(i == dist.size() - 1){
                sum_of_hr += (long double)dist[i] / mid; // fractional allowed
            } 
            else{
                sum_of_hr += ceil((long double)dist[i] / mid); // must round up
            }
        }

        if(sum_of_hr <= hour + 1e-9){ //add epsilon for precision in floting point numbers
            ans = mid;
            e = mid - 1;
        }
        else s = mid + 1;
    }
    return ans;
}

int main(){
    vector<int> dist = {1,3,2};
    double hour = 2.7;
    minSpeedOnTime(dist, hour);
    return 0;
}