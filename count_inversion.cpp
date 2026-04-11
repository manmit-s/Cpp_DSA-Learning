#include <iostream>
#include <vector>
using namespace std;

int merge(vector<int> &arr, int st, int mid, int end){
    vector<int> temp;
    int i = st, j = mid+1;
    int invCount = 0;

    while(i <= mid && j <= end){
        if(arr[i] <= arr[j]) temp.push_back(arr[i++]);
        else {
            temp.push_back(arr[j++]);
            invCount += mid - i + 1;
        }
    }

    while(i <= mid) temp.push_back(arr[i++]);
    while(j <= end) temp.push_back(arr[j++]);

    for(int k = 0; k < temp.size(); k++){
        arr[st + k] = temp[k];
    }

    return invCount;
}

int invCount(vector<int> &arr, int st, int end){
    if(st >= end) return 0;

    int mid = st + (end - st)/2;

    int left = invCount(arr, st, mid);
    int right = invCount(arr, mid+1, end);

    int mergeInv = merge(arr, st, mid, end);

    return left + right + mergeInv;
}

int main(){
    vector<int> arr = {6,3,5,2,7};
    cout<<"Inversion Count: "<<invCount(arr, 0, arr.size()-1);
    return 0;
}