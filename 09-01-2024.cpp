// 2022. Convert 1D Array Into 2D Array
// https://leetcode.com/problems/convert-1d-array-into-2d-array/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
                vector<vector<int>> result(m);
        int i;
        switch (m * n == original.size() ? 1 : 0) {
            case 1:
                i = 0;
                while (i < m) {
                    result[i] = vector<int>(original.begin() + i * n, original.begin() + (i * n + n));
                    i++;
                }
                break;
            default:
                return {};
        }
        return result;
    }
};

int main () {
    
     return 0;
}