// 861. Score After Flipping Matrix
// https://leetcode.com/problems/score-after-flipping-matrix/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        int score = (1 << (m - 1)) * n;

        for (int j = 1; j < m; j++) {
            int x = 0;
            for (int i = 0; i < n; i++) {
                if (grid[i][j] == grid[i][0]) {
                    x++;
                }
            }
            x = max(x, n - x);
            int temp = (1 << (m - j - 1)) * x;

            score += temp;
        }

        return score;
    }
};

int main () {
    
     return 0;
}