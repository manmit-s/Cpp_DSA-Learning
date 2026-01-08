#include <iostream>
using namespace std;

int guess(int num){
    int picked = 6;
    if(num == picked) return 0;
    else if(num < picked) return 1;
    else return -1;
}

int guessNumber(int n) {
    int s = 1, e = n;
    while(s <= e){
        int mid = s + (e - s)/2;
        if(guess(mid) == 0) return mid;
        else if(guess(mid) == 1){
            s = mid + 1;
        }
        else e = mid - 1;
    }
    return -1;
}

int main(){
    cout<<guessNumber(10)<<endl;
    return 0;
}