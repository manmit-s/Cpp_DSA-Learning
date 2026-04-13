#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotate(vector<vector<int>>& matrix) {
    int n = matrix[1].size();

    //Transpose
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    //Reverse every row after Transpose
    for(int i = 0; i < n; i++){
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

int main(){
    
    return 0;
}