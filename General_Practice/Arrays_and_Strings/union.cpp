//galat hai 
#include <iostream>
using namespace std;
void display(int arr[], int size){
    for (int i = 0; i < size; i++){
       cout<<arr[i]<<"\t";
    }
}
int main(){
    int a1[] = {6, 4, 7, 8, 10, 12};
    int a2[] = {9, 6, 11, 16, 8, 12, 7, 4};
    // int a1[] = {6, 4, 7, 8, 10, 12};
    // int a2[] = {9, 6, 11, 16, 8, 12, 12, 7, 4, 11};

    int s1, s2, s3, k = 0;
    s1 = sizeof(a1)/sizeof(int);
    s2 = sizeof(a2)/sizeof(int);
    s3 = s1 + s2;

    int a3[s3];
    for(int i = 0; i < s1; i++){
        a3[k++] = a1[i];
    }

    for(int i = 0; i < s2; i++){
        bool flag = false;
        for(int j = 0; j < k; j++){
            if(a2[i] == a3[j]){
                flag = true;
                break;
            }
        }
        if(!flag){
            a3[k++] = a2[i];
        }
    }
    display(a3, k);
    return 0;
}
