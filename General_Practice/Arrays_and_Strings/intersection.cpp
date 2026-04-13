//intersection of 2 arrays
// My method (not efficient for bigger arrays) time complexity --> O(n*m)
#include <iostream>
using namespace std;
void display(int arr[], int size){
    for (int i = 0; i < size; i++){
       cout<<arr[i]<<"\t";
    }
}
int main(){
    // int a1[] = {6, 4, 7, 8, 10, 12};
    // int a2[] = {9, 6, 11, 16, 8, 12, 7, 4, 11};
    int a1[] = {6, 4, 7, 8, 10, 12};
    int a2[] = {9, 6, 11, 16, 8, 12, 12, 7, 4, 11};

    int s1, s2, s3, k = 0;
    s1 = sizeof(a1)/sizeof(int);
    s2 = sizeof(a2)/sizeof(int);
    s3 = min(s1, s2);

    int a3[s3];
    for(int i = 0; i < s1; i++){
        for(int j = 0; j < s2; j++){
            if(a1[i] == a2[j]){
                if(a1[i] != a3[k-1] || k == 0){ //condition to avoid duplication
                    a3[k++] = a1[i];
                    // k++;
                }
                break;
            }
        }
    }
    // k is the new size for 3rd array
    display(a3, k);
    return 0;
}

// New soln after learning time - space complexity