#include <iostream>
using namespace std;

int reverseBits(int n) {
    unsigned int result = 0;
    for(int i = 0; i < 32; i++){
        /*
            result = (result << 1) | (n & 1);
            - pehle (n & 1) execute hoga, what it does is it takes LSB of n and it does bitwise AND with 1 inorder to get the LSB as it is.
            - then execute hoga (result << 1), here we are shifting all bit to left in order to create space to insert this new LSB fron n.
            - last mai '|' operation preform hoga, so we are actually adding the bits using bitwise OR so that the LSB from n gets inserted into the result
        */
        result = (result << 1) | (n & 1);
        n>>=1; // we are bitwise shifting the n towards right so that we can have the new bit to reverse 
    }
    return result;
}

int main(){
    int n = 43261596;
    cout<<reverseBits(n);
    return 0;
}