#include <iostream>
#include <vector>
using namespace std;


// Brute force will requires O(n*n) TC

/* Is qs ko halke mai mat le, approach kaafi non intuitive hai pehli baar mai click nahi hone wala bhai */
void duplicateZeros(vector<int>& arr) {
    int n = arr.size(), zeroes = 0;
    for(int x : arr){
        if(x == 0) zeroes++;
    }
    int i = n-1, j = n+zeroes-1;

    while(i < j){
        if(arr[i] == 0){
            if( j < n){
                arr[j] = 0;
            }
            j--;
            if( j < n){
                arr[j] = 0;
            }
        }
        else{
            if( j < n){
                arr[j] = arr[i];
            }
        }
        i--, j--;
    }
}

int main(){
    
    return 0;
}