#include <iostream>
#include <vector>
using namespace std;

void gameOfLife(vector<vector<int>>& board) {
    int row = board.size(), col = board[0].size();
    vector<pair<int, int>> directions = {
        {0, 1}, {1, 1}, {1, 0}, {1, -1}, {0, -1}, {-1, -1}, {-1, 0}, {-1, 1}
    };
    
    /*
    Transitions:
    0 → dead → dead
    1 → live → live
    2 → live → dead
    3 → dead → live
    Basically:
    1 and 2 = originally alive
    0 and 3 = originally dead
    */

    //First Pass for transitioning
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            int live = 0;

            for(auto d : directions){
                int nI = i + d.first;
                int nJ = j + d.second;
            
                if(nI >= 0 && nI < row && nJ >= 0 && nJ < col){
                    if(board[nI][nJ] == 1 || board[nI][nJ] == 2) live++;
                }
            }
            if(board[i][j] == 1){
                if(live < 2 || live > 3){
                    board[i][j] = 2; //live to dead
                }
            }
            else{
                if(live == 3) board[i][j] = 3; //dead to live
            }
        }
    }

    //Second Pass for in-place changes
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(board[i][j] == 2) board[i][j] = 0;
            else if(board[i][j] == 3) board[i][j] = 1;
        }
    }
}

int main(){
    
    return 0;
}