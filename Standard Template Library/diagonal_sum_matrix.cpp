#include <iostream>
using namespace std;

//BruteForce Approach 
// int diagSum(int mat[][4], int size){ //Time Complxity --> O(n*n)
//     int pDiagSum = 0, sDiagSum = 0;
//     for(int  i = 0; i < size; i++){
//         for(int j = 0; j < size; j++){
//             if(i == j){
//                 pDiagSum += mat[i][j];
//             }
//             else if(i+j == size-1){
//                 sDiagSum += mat[i][j];
//             }
//         }
//     }
//     return (pDiagSum + sDiagSum);
// }


//Optimized Approach
/*
For Primary diagonal>> i == j was the condition so we can write it as mat[i][i] 
For Seccondary diagonal>> i + j == size - 1 was the condition so we have j == size - 1 - i >> mat[i][size-i-1]
*/

int diagSum(int mat[][4], int size){ //Time Complxity --> O(n)
    int pDiagSum = 0, sDiagSum = 0;
    for(int  i = 0; i < size; i++){
        pDiagSum += mat[i][i];
        sDiagSum += mat[i][size-1-i];
    }
    return (pDiagSum + sDiagSum);
}

int main(){
    int matrix[4][4] = {{1, 2, 3, 4}, 
                        {5, 6, 7, 8}, 
                        {9, 10, 11, 12}, 
                        {13, 14, 15, 16}};

    int size = 4;
    cout<<diagSum(matrix, size);
    return 0;
}