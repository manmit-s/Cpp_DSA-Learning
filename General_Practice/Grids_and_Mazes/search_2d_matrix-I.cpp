#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    //Binary Search on Rows
    int m = matrix.size(), n = matrix[0].size();
    int start = 0, end = m-1;
    while(start <= end){
        int midRow = start + (end - start)/2;
        if(target > matrix[midRow][n-1]){
            start = midRow + 1;
        }
        else if(target < matrix[midRow][0]){
            end = midRow - 1;
        }
        else{
            //Binary Search on Column of midRow
            start = 0, end = n - 1;
            while(start <= end){
                int midIDX = start + (end - start)/2;
                if(target > matrix[midRow][midIDX]){
                    start = midIDX + 1;
                }
                else if(target < matrix[midRow][midIDX]){
                    end = midIDX - 1;
                }
                else{
                    return true;
                }
            }
        }
    }
    return false;
}

int main(){
    vector<vector<int>> matrix = {
        {1,3,5,7},
        {10,11,16,20},
        {23,30,34,60}
    };

    int target = 3;
    cout<<searchMatrix(matrix, target)<<endl;

    return 0;
}