#include <iostream>
#include <vector>
using namespace std;

void display(vector <int> arr){
    for(int i = 0; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}

void bubbleSort(vector <int>& arr){   //Time Complexity --> O(n*n)
    int n = arr.size();
    bool isSwap = false;  // optimization for handling already sorted arrays

    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - 1 - i; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
                isSwap = true;
            }
        }
        if(!isSwap) return;   //array is already sorted
    }
}

int main(){
    vector <int> vec = {5,8,6,3,2,4,7};
    bubbleSort(vec);
    display(vec);
    return 0;
}