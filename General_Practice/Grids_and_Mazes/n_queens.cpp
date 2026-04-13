#include <iostream>
#include <vector>
using namespace std;

bool isSafe(vector<string> board, int row, int col, int n){
    // 1. Column Check (Vertically Upwards)
    // Check if any Queen is present in the same column (in PREVIOUS rows 0 to row-1)
    for(int i = 0; i < row; i++){
        if(board[i][col] == 'Q') return false;
    }

    // 2. Left Diagonal Check (Upwards-Left)
    // Indices: i decreases, j decreases (i>=0 && j>=0)
    for(int i = row, j = col; i >= 0 && j >= 0; i--, j--){
        if(board[i][j] == 'Q') return false;
    }

    // 3. Right Diagonal Check (Upwards-Right)
    // Indices: i decreases, j increases (i>=0 && j<n)
    for(int i = row, j = col; i >= 0 && j < n; i--, j++){
        if(board[i][j] == 'Q') return false;
    }

    // Agar koi Queen attack nahi kar rahi, toh safe hai
    return true;
}

void nQueens(vector<string> &board, int row, int n, vector<vector<string>> &ans){
    if(row == n){
        ans.push_back(board);
        return;
    }

    for(int j = 0; j<n; j++){
        if(isSafe(board, row, j, n)){
            board[row][j] = 'Q';
            nQueens(board, row+1, n, ans);
            board[row][j] = '.';
        }
    }
}

vector<vector<string>> solveNQueens(int n) {
    vector<string> board(n, string(n, '.'));
    vector<vector<string>> ans;

    nQueens(board, 0, n, ans);
    return ans;
}

int main(){
    
    return 0;
}