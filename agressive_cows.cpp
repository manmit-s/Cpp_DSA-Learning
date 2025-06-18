#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

bool isPossible(vector <int>& vec, int n, int c, int minAllowedDist){
    int cows = 1, lastStallPos = vec[0];

    for(int i = 0; i < n; i++){
        if(vec[i] - lastStallPos >= minAllowedDist){
            cows++;
            lastStallPos = vec[i];
        }
        if(cows == c){
            return true;
        }
    }
    return false;
}

int largestMinimumDist(vector <int>& stallsPosition, int n, int m){
    sort(stallsPosition.begin(), stallsPosition.end());

    if(m > n) return -1;

    int st = 1, end = stallsPosition[n -1] - stallsPosition[0], ans = -1;

    while(st <= end){
        int mid = st + (end - st)/2;

        if(isPossible(stallsPosition, n, m, mid)){
            ans = mid;
            st = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return ans;
}

int main(){
    vector <int> stallPosition = {1, 2, 8, 4, 9};
    int N = stallPosition.size(), C = 3;

    cout<<largestMinimumDist(stallPosition, N, C)<<endl;
    return 0;
}