#include <iostream>
using namespace std;
void reverseArray(int arr[], int size){
    int start = 0, end = size - 1;
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void display(int arr[], int size){
    for (int i = 0; i < size; i++){
       cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {4, 2, 69, 35, 5, 6}, size;
    size = sizeof(arr)/sizeof(int);
    
    reverseArray(arr, size);
    display(arr, size);

    return 0;
}