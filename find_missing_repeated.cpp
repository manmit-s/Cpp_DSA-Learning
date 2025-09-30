#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
    unordered_set<int> s;
    int a, b, n = grid.size();
    vector<int> ans;
    int actualSum = 0, expectedSum = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            actualSum += grid[i][j];

            if(s.find(grid[i][j]) != s.end()){
                a = grid[i][j];
                ans.push_back(a);
            }
            s.insert(grid[i][j]);
        }
    }
    expectedSum = ((n*n)*(n*n + 1))/2;
    b = expectedSum + a - actualSum;
    ans.push_back(b);
    return ans;
}

void display(vector<int> array){
    for(int i = 0; i < array.size(); i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<vector<int>>grid = {{9,1,7},{8,9,2},{3,4,6}};

    display(findMissingAndRepeatedValues(grid));

    return 0;
}