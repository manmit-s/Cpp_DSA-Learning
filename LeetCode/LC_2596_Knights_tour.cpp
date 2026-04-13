#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<vector<int>> &grid, int r, int c, int n, int expValue){
    if(r<0 || c<0 || r>=n || c>=n || grid[r][c] != expValue) return false;
    if(expValue == n*n-1) return true;

    // Valid 8 moves for a knight
    bool move1 = isValid(grid, r-2, c+1, n, expValue+1);
    bool move2 = isValid(grid, r-1, c+2, n, expValue+1);
    bool move3 = isValid(grid, r+1, c+2, n, expValue+1);
    bool move4 = isValid(grid, r+2, c+1, n, expValue+1);
    bool move5 = isValid(grid, r+2, c-1, n, expValue+1);
    bool move6 = isValid(grid, r+1, c-2, n, expValue+1);
    bool move7 = isValid(grid, r-1, c-2, n, expValue+1);
    bool move8 = isValid(grid, r-2, c-1, n, expValue+1);

    return move1 || move2 || move3 || move4 || move5 || move6 || move7 || move8;
}

bool checkValidGrid(vector<vector<int>>& grid) {
    return isValid(grid, 0, 0, grid.size(), 0);
}

int main(){
    
    return 0;
}