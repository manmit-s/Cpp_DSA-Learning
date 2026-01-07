#include <iostream>
using namespace std;

int arrangeCoins(int n) {
    int s = 1, e = n, ans;
    while(s <= e){
        int mid = s + (e - s)/2;
        long long num_of_coins_required = (long long)mid*(mid+1)/2;
        if(num_of_coins_required > n){
            e = mid - 1;
        }
        else{
            ans = mid;
            s = mid + 1;
        }
    }  
    return ans;  
}

int main(){
    int coins = 5;
    cout<<arrangeCoins(coins);
    return 0;
}