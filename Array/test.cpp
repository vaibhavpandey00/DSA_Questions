#include <bits/stdc++.h>

using namespace std;

void setZeroes(vector<vector<int>> &matrix)
{
    int m = matrix.size();  // matrix[0][...] --> Col
    int n = matrix[0].size(); // martix[...][0] -->Row

    for(int i = 0; i < m; i++ ){
        for(int j = 0; j < n; j++){
            if(matrix[i][j] == 0){
                // mark the i-th row 0
                martix[][0]
            }
        }
    }

}

int main()
{
    vector<vector<int>> arr{
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}};

    setZeroes(arr);
}