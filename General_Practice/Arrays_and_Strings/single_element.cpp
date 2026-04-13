#include <iostream>
#include <vector>
using namespace std;

int singleNonDuplicate(vector<int>& A) {
    int n = A.size();
    if(n == 1) return A[0];

    int st = 0, end = n - 1;

    while(st <= end){
        int mid = st + (end - st)/2;
        if(mid == 0 && A[mid] != A[mid + 1]) return A[mid];
        if(mid == n - 1 && A[mid] != A[mid - 1]) return A[mid];

        if(A[mid] != A[mid + 1] && A[mid] != A[mid - 1]) return A[mid];
        else if(mid % 2 == 0){
            if(A[mid] == A[mid - 1]){
                end = mid - 1;
            }
            else{
                st = mid + 1;
            }
        }
        else{
            if(A[mid] == A[mid - 1]){
                st = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main(){
    
    return 0;
}
