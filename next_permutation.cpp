#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void display(vector<int>& vec){
    for(int i = 0; i < vec.size(); i++){
        cout<<vec[i]<<" ";
    }
}

//pivot element --> element that is smaller than its next element, A[i] < A[i+1]
void nextPermutation(vector<int>& nums) {
        int pivot = -1, n = nums.size();
        //Step - 1 finding Pivot
        for(int i = n - 2; i >= 0; i--){
            if(nums[i] < nums[i + 1]){
                pivot = i;
                break;
            }
        }
        if(pivot == -1){
            reverse(nums.begin(), nums.end());  //reverse fn from STL library
            return;
        }
        //Step - 2 next larger element
        for(int i = n - 1; i > pivot; i++){
            if(nums[i] > nums[pivot]){
                swap(nums[i], nums[pivot]);
                break;
            }
       }
       //Step - 3 reverse the elements from pivot + 1 to n - 1
       // reverse(nums.begin() + (pivot + 1), nums.end());
       //reverse this using 2 pointer approach
       int i = pivot + 1, j = n - 1;
       while (i <= j){
        swap(nums[i++], nums[j--]);
       }
    }

int main(){
    vector <int> vec = {1,2,3,7,6,5,4};
    nextPermutation(vec);
    display(vec);
    return 0;
}