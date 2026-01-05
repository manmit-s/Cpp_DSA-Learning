#include <iostream>
using namespace std;

bool isPerfectSquare(int num) {
    if(num < 2) return true;
    int s = 1, e = num/2;
    while(s <= e){
        long long mid = s + (e - s)/2;
        if(mid*mid == num) return true;
        else if(mid*mid < num) s = mid + 1;
        else e = mid - 1; 
    }        
    return false;
}

int main(){
    int x = 4;

    if(isPerfectSquare(x)){
        cout<<"Yes "<<x<<" is a perfect square"<<endl;
    }
    else{
        cout<<"No "<<x<<" is not a perfect square"<<endl;
    }
    return 0;
}