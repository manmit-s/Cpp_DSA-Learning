#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector <int>& vec, int target){
   int st = 0, end = vec.size() - 1;
    while(st <= end){
        // int mid = (st + end) / 2;
        int mid = st +  (end - st) / 2;
        if(target > vec[mid]){
                st = mid + 1;
            }
            else if(target < vec[mid]){
                    end = mid - 1;
                }
                else{
                        return mid;
                    }
                }
                return -1;
            }
   
// Recursive Method
// int recBinarySearch(vector <int>& vec, int target, int st, int end){
//     if (st > end){
//         return -1;
//     }
//     int mid = st +  (end - st) / 2;

//     if(target > vec[mid]){
//         return recBinarySearch(vec, target, (mid + 1), end);
//     }
//     else if(target < vec[mid]){
//         return recBinarySearch(vec, target, st, (mid - 1));
//     }
//     else{
//         return mid;
//     }
//     return -1;
// }

int main(){
    vector <int> arr = {1, 2, 3, 5, 6, 7, 10, 11};
    int target = 10;

    cout << binarySearch(arr, target) << endl;
    return 0;
}