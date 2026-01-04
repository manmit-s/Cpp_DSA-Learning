#include <iostream>
#include <cmath>
using namespace std;

int mySqrt(int x){   
    if(x < 2) return x;

    int s = 1, e = x / 2, ans = 0;
    while (s <= e){
        long long mid = s + (e - s) / 2; //assigned with long int because we are squaring mid in 64bit so it can overflow
        if (mid * mid == x)
            return mid;
        else if (mid * mid > x)
        {
            e = mid - 1;
        }
        else
        {
            ans = mid; //as long as the mid*mid is less than x every mid is our possible answer
            s = mid + 1;
        }
    }
    return ans;
}

int main()
{
    cout << mySqrt(16) << endl;
    return 0;
}