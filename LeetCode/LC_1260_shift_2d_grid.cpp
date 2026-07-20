#include <iostream>
#include <vector>
using namespace std;

class Solution {
private:
    vector<int> flatten2dArray(vector<vector<int>> &grid){
        int row = grid.size(), col = grid[0].size();
        vector<int> flattened;
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                flattened.push_back(grid[i][j]);
            }
        }
        return flattened;
    }
    vector<int> shift1dArray(vector<int> array, int k) {
        int n = array.size();
        k = k % n;
        vector<int> result(n);
        
        for (int i = 0; i < n; i++) {
            result[(i + k) % n] = array[i];
        }
        
        return result;
    }
    vector<vector<int>> convertToGrid(vector<int>const &flattened, int row, int col){
        vector<vector<int>> ans(row, vector<int>(col));
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                ans[i][j] = flattened[i * col + j];
            }
        }
        return ans;
    }

public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int row = grid.size(), col = grid[0].size();
        vector<int> flattened = flatten2dArray(grid);
        return convertToGrid(shift1dArray(flattened, k), row, col);
    }
};

int main(){
    
    return 0;
}