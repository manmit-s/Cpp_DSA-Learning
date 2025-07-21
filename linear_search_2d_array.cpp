#include <iostream>
using namespace std;

bool linearSearch2d(int arr[][3], int rows, int columns, int target){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            if(arr[i][j] == target){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int matrix[4][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9},
                        {10, 11, 12}};
    int rows = 4, columns = 3;
    
    // without function
    int target = 12;
    // bool flag = false;
    // for(int i = 0; i < rows; i++){
    //     for(int j = 0; j < columns; j++){
    //         if(matrix[i][j] == target){
    //             flag = true;
    //             cout<<"Target at index - i = "<<i<<", j = "<<j<<endl;
    //             break;
    //         }
    //     }
    // }
    // if(!flag){
    //     cout<<"Target not found"<<endl;
    // }


    cout<<linearSearch2d(matrix, rows, columns, target)<<endl;
    return 0;
}