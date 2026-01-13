#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool canPlace(vector<int>& position, int numOfBalls, int dist){
    int count = 1; //we placed first ball at position[0]
    int last_pos = position[0];

    for(int i = 1; i < position.size(); i++){
        if(position[i] - last_pos >= dist){
            count++;
            last_pos = position[i];
        }
        if(count >= numOfBalls) return true;
    }
    return false;
}

int maxDistance(vector<int>& position, int m) {
    sort(position.begin(), position.end());
    int n = position.size();
    int s = 1, e = position[n - 1] - position[0], ans = 0;
    
    while(s <= e){
        int mid = s + (e - s)/2;
        if(canPlace(position, m, mid)){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return ans;
}

int main(){
    
    return 0;
}