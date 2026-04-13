#include <iostream>
#include <vector>
using namespace std;

bool isSafe(vector<vector<char>>& board, int row, int col, char digit){
    //horizontal check
    for(int j = 0; j < 9; j++){
        if(board[row][j] == digit) return false;
    }

    //vertical check 
    for(int i = 0; i < 9; i++){
        if(board[i][col] == digit) return false;
    }

    //grid check
    int srow = (row/3)*3, scol = (col/3)*3;
    for(int i = srow; i <= srow+2; i++){
        for(int j = scol; j <= scol+2; j++){
            if(board[i][j] == digit) return false;
        }
    } 

    return true;
}

bool helper(vector<vector<char>>& board, int row, int col){
    if(row == 9){
        return true;
    }


    int nextRow = row, nextCol = col+1;
    if(nextCol == 9){
        nextCol = 0, nextRow = row + 1;
    }

    if(board[row][col] != '.') return helper(board, nextRow, nextCol);

    //place the digit
    for(char digit = '1'; digit <= '9'; digit++){
        if(isSafe(board, row, col, digit)){
            board[row][col] = digit; 
            
            if(helper(board, nextRow, nextCol)){
                return true;
            }
            board[row][col] = '.'; 
        }
    }
    return false;
}


void solveSudoku(vector<vector<char>>& board) {
    helper(board, 0, 0); 
}

int main(){
    //from leetcode
    return 0;
}