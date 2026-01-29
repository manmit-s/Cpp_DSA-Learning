#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool canMove(int x, int y, int n, vector<vector<bool>> &visited, vector<vector<int>> &m){
    if((x>=0 && x<n) && (y>=0 && y<n) && !visited[x][y] && m[x][y]==1) return true;
    return false;
}

void solve(vector<vector<int>> &m, int n, vector<string> &ans, int x, int y, vector<vector<bool>> &visited, string path){
    // Base Case
    if(x == n-1 && y == n-1){
        ans.push_back(path);
        return;
    }
    //Reached at certain x,y
    visited[x][y] = true;
    
    // 4 choices -> D, L, R, U
    //Down
    int newx = x + 1, newy = y;
    if(canMove(newx, newy, n, visited, m)){
        path.push_back('D');
        solve(m, n, ans, newx, newy, visited, path);
        path.pop_back();
    }
    //Left
    newx = x, newy = y - 1;
    if(canMove(newx, newy, n, visited, m)){
        path.push_back('L');
        solve(m, n, ans, newx, newy, visited, path);
        path.pop_back();
    }
    //Right
    newx = x, newy = y + 1;
    if(canMove(newx, newy, n, visited, m)){
        path.push_back('R');
        solve(m, n, ans, newx, newy, visited, path);
        path.pop_back();
    }
    //Up
    newx = x - 1, newy = y;
    if(canMove(newx, newy, n, visited, m)){
        path.push_back('U');
        solve(m, n, ans, newx, newy, visited, path);
        path.pop_back();
    }
    
    visited[x][y] = false;

}

vector<string> findPath(vector<vector<int>> &m){
    int n = m.size();
    vector<string> ans;

    //when that 0,0 cell itself is zero then we return empty ans basically
    if(m[0][0] == 0) return ans;
    
    int x = 0, y = 0;
    //Initialize the visited vector with false
    vector<vector<bool>> visited(n, vector<bool>(n, false));

    string path = "";
    
    solve(m, n, ans, x, y, visited, path);

    //to return answer lexicographically
    sort(ans.begin(), ans.end());
    return ans;
}

int main(){
    vector<vector<int>> matrix = {{1, 0, 0, 0},
                                  {1, 1, 0, 1},
                                  {1, 1, 0, 0},
                                  {0, 1, 1, 1},
                                 };
    int n = 4;
    vector<string> res = findPath(matrix);
    for(auto x : res){
        cout<<x<<"\t";
    }
    return 0;
}