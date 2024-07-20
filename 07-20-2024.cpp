// 1605. Find Valid Matrix Given Row and Column Sums
// https://leetcode.com/problems/find-valid-matrix-given-row-and-column-sums/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rs, vector<int>& cs) {
        vector<vector<int>> m(rs.size(), vector<int>(cs.size()));
        for (int x = 0, y = 0; x < rs.size() && y < cs.size(); ) {
            m[x][y] = min(rs[x], cs[y]);
            rs[x] -= m[x][y];
            cs[y] -= m[x][y];
            x += rs[x] == 0;
            y += cs[y] == 0;
        }
        return m;
    }
};

int main () {
    
     return 0;
}