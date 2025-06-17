#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector <int>& pages, int n, int m, int maxAllowedPages){
    int numOfStud = 1, page = 0;
    for(int i = 0; i < n; i++){
        if(pages[i] > maxAllowedPages) return false;
        if(pages[i] + page <= maxAllowedPages){
            page += pages[i];
        }
        else{
            numOfStud++;
            page = pages[i];
        }
    }
    return numOfStud > m ? false : true;  
}

int allocatePages(vector <int>& pages, int n, int m){ // n -> no. of Books , m -> no. of Students
    if(m > n) return -1;

    int sum = 0, ans = -1;
    for(int i = 0; i < n; i++){
        sum += pages[i];
    }
    
    int st = 0, end = sum; // range of possible answers
    while (st <= end){
        int mid = st + (end - st)/2;
        if(isValid(pages, n, m, mid)){ // left search space
            ans = mid;
            end = mid - 1;
        }
        else{ // right search space
            st = mid + 1;
        }
    }
    return ans; 
}

int main(){
    vector <int> arr = {2, 1, 3, 4};
    int n = arr.size(), m = 2;
    cout<<allocatePages(arr, n, m);    
    return 0;
}