#include <iostream>
using namespace std;

class Solution {
public:
    int addDigits(int num) {
        if(num == 0) return 0;
        int base = 10;
        return 1 + ((num - 1) % (base - 1));
    }
};


int main(){
    
    return 0;
}