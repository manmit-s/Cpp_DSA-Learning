#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int m = matrix.size(), n = matrix[0].size();
    int srow = 0, scol = 0, erow = m-1, ecol = n-1;
    vector<int> ans;

    while(srow <= erow && scol <= ecol){
        //top
        for(int j = scol; j <= ecol; j++){
            ans.push_back(matrix[srow][j]);
        }

        //right
        for(int i = srow+1; i <= erow; i++){
            ans.push_back(matrix[i][ecol]);
        }

        //bottom
        for(int j = ecol-1; j >= scol; j--){
            if(srow == erow){
                break;
            }
            ans.push_back(matrix[erow][j]);
        }

        //left
        for(int i = erow-1; i >= srow+1; i--){
            if(scol == ecol){
                break; 
            }
            ans.push_back(matrix[i][scol]);
        }
        srow++, scol++;
        erow--, ecol--;
    }
    return ans;
}

void display(vector<int> array){
    for(int i = 0; i < array.size(); i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<vector<int>> matrix = {{1,2,3},
                                  {4,5,6},
                                  {7,8,9}};

    display(spiralOrder(matrix));
    return 0;
}