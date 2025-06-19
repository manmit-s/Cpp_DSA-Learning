#include <iostream>
#include <vector>
using namespace std;

void display(vector <int> arr){
    for(int i = 0; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}

void insertionSort(vector <int> & arr){
    int n = arr.size();
    for(int i = 1; i < n; i++){
        int curr = arr[i];
        int prev = i - 1;
        
        while(prev >= 0 && arr[prev] > curr){
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr; // placing the current element to its correct position
    }
}

int main(){
    vector <int> vec = {5,8,6,3,2,4,7};
    insertionSort(vec);
    display(vec);
    return 0;
}