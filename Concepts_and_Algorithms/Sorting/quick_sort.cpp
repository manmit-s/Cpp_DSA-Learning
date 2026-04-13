#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int start, int end){
    int idx = start-1, pivot = arr[end];

    for(int i=start; i<end; i++){
        if(arr[i] <= pivot){
            idx++;
            swap(arr[i], arr[idx]);
        }
    }
    idx++;
    swap(arr[end], arr[idx]);

    return idx;
}

void quickSort(vector<int> &arr, int start, int end){
    if(start < end){
        int pivIdx = partition(arr, start, end);
        quickSort(arr, pivIdx+1, end); //Right Half
        quickSort(arr, start, pivIdx-1); //Left Half
    }

}

void display(vector<int> &arr){
    for(int x : arr){
        cout<<x<<"\t";
    }
}

int main(){
    vector<int> arr = {12, 31, 35, 8, 32, 17};

    quickSort(arr, 0, arr.size()-1);
    display(arr);
    return 0;
}