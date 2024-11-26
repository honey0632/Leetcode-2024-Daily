// 2924. Find Champion II
// https://leetcode.com/problems/find-champion-ii/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        bitset<100> losses; 
        
        for (const auto& edge : edges) {
            losses.set(edge[1]);
        }
        
        int champion = -1;
        for (int i = 0; i < n; i++) {
            if (!losses[i]) {
                if (champion != -1) return -1;
                champion = i;
            }
        }
        
        return champion;
    }
};

int main() {
    
     return 0;
}