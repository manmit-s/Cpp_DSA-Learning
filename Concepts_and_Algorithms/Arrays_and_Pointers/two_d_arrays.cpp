#include <iostream>
using namespace std;

int main(){
    // int matrix[4][3] = {{1, 2, 3},
    //                     {4, 5, 6},
    //                     {7, 8, 9},
    //                     {10, 11, 12}};
    // int rows = 4, columns = 3;

    // matrix[2][1] = 18;
    // cout<<matrix[2][1]<<endl;

    // Loops in 2d array
    
    // for input
    int matrix2[4][3];
    int rows = 4, columns = 3;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            cin>>matrix2[i][j];
        }
    }

    // for output
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            cout<<matrix2[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
    return 0;
}