// 0997. Find the Town Judge
// https://leetcode.com/problems/find-the-town-judge/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(n==1) return 1;
        unordered_map<int,int>mp;
        for (auto& it: trust) {
            mp[it[0]]--;
            mp[it[1]]++;
        }
        for (auto& it: mp) {
            if(it.second==n-1) return it.first;
            
        }
        return -1;
            
        
    }
};

int main () {
    
     return 0;
}