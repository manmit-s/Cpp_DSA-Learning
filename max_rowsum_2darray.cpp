#include <iostream>
#include <climits>
using namespace std;

int maxRowSum(int mat[][3], int size){
    int maxSum = INT_MIN;
    for(int i = 0; i < size; i++){
        int sum = 0;
        for(int j = 0; j < size; j++){
            sum = sum + mat[i][j];
        }
        maxSum = max(maxSum, sum);
    }
    return maxSum;
}

int main(){
    int matrix[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};
    int size = 3;

    cout<<maxRowSum(matrix, size);
    return 0;
}