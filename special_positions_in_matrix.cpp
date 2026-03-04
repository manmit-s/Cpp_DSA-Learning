#include <iostream>
#include <vector>
using namespace std;

/* Brute Force */
// int numSpecial(vector<vector<int>> &mat) {
//     int m = mat.size(), n = mat[0].size();
//     int count = 0;

//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             if (mat[i][j] == 0) continue;
//             bool special = true;

//             // Check column
//             for (int r = 0; r < m; r++) {
//                 if (r != i && mat[r][j] == 1) {
//                     special = false;
//                     break;
//                 }
//             }

//             // Check row
//             for (int c = 0; c < n && special; c++) {
//                 if (c != j && mat[i][c] == 1) {
//                     special = false;
//                     break;
//                 }
//             }

//             if (special) count++;
//         }
//     }
//     return count;
// }

/* Little Optimal Approach */
int numSpecial(vector<vector<int>>& mat){
    int m = mat.size(), n = mat[0].size();
    vector<int> row(m, 0), col(n, 0); //To store count of nnumber of 1s per row and col

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(mat[i][j] == 1){
                row[i]++;
            col[j]++;
        }
        }
    }

    int count = 0;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(mat[i][j] == 0) continue;
            if(row[i] == 1 && col[j] == 1) count++;
        }
    }
    return count;
}

int main(){

    return 0;
}