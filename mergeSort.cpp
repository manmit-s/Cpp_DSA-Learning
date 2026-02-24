#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& arr, int st, int mid, int end){
    vector<int> temp;
    int i = st, j = mid+1;
    while(i <= mid && j <= end){
        if(arr[i] < arr[j]) temp.push_back(arr[i++]);
        else temp.push_back(arr[j++]);
    }
    while(i <= mid){
        temp.push_back(arr[i++]);
    }
    while(j <= end){
        temp.push_back(arr[j++]);
    }

    for(int i = 0; i < temp.size(); i++){
        arr[i + st] = temp[i];
    }
}

void mergeSort(vector<int>& arr, int st, int end){
    if(st < end){
        int mid = st + (end-st)/2;

        //Left Half
        mergeSort(arr, st, mid);

        //Right Half
        mergeSort(arr, mid+1, end);

        //Merge
        merge(arr, st, mid, end);
    }

}

int main(){
    
    return 0;
}