// 2373. Largest Local Values in a Matrix
// https://leetcode.com/problems/largest-local-values-in-a-matrix/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> res(n-2,vector<int>(n-2,0));

        for(int i=0;i<n;i++){
            for(int j=0;j<n-2;j++){
                grid[i][j] = max(grid[i][j],max(grid[i][j+1],grid[i][j+2]));
            }
        }

        for(int j=0;j<n-2;j++){
            for(int i=0;i<n-2;i++){
                res[i][j] = max(grid[i][j],max(grid[i+1][j],grid[i+2][j]));
            }
        }

        return res;
    }
};

int main () {
    
     return 0;
}