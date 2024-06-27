// 1791. Find Center of Star Graph
// https://leetcode.com/problems/find-center-of-star-graph/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findCenter(vector<vector<int>>& e) {
        return e[0][0] == e[1][0] || e[0][0] == e[1][1] ? e[0][0] : e[0][1];
    }
};

int main () {
    
     return 0;
}