#include<iostream>
#include<climits>
using namespace std;

class Solution {
public:
    pair<int, int> maxNumbers(int x){
        int largest = INT_MIN;
        int secondLargest = INT_MIN;
        pair<int, int> result;
        while(x > 0){
            int ld = x%10;
            if(ld > largest){
                secondLargest = largest;
                largest = ld;
            }
            else if(ld > secondLargest){
                secondLargest = ld;
            }
            x/=10;
        }
        result = {largest, secondLargest};
        return result;
    }

public:
    int maxProduct(int n) {
        pair<int, int> numbers = maxNumbers(n);
        return numbers.first * numbers.second;
    }
};

int main(){
    Solution s;
    cout << "Test 345: " << s.maxProduct(345) << " (Expected: 20)" << endl;
    cout << "Test 22: " << s.maxProduct(22) << " (Expected: 4)" << endl;
    cout << "Test 220: " << s.maxProduct(220) << " (Expected: 4)" << endl;
    cout << "Test 100: " << s.maxProduct(100) << " (Expected: 0)" << endl;
    cout << "Test 9876: " << s.maxProduct(9876) << " (Expected: 72)" << endl;
    return 0;
}