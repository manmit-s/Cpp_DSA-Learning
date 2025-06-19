#include <iostream>
#include <vector>
using namespace std;

void display(vector <int> arr){
    for(int i = 0; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}

void selectionSort(vector <int>& arr){
    int n = arr.size();
    for(int i = 0; i < n - 1; i++){
        int minIndex = i; // assuming the current 'i' index as smallest element index
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;  // updating the actual smallest element index
            }
        }
        swap(arr[i] , arr[minIndex]);  // swapping the found smallest element with i th index element
    }
}

int main(){
    vector <int> vec = {5,8,6,3,2,4,7};
    selectionSort(vec);
    display(vec);
    return 0;
}