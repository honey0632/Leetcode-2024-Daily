// 2225. Find Players With Zero or One Losses
// https://leetcode.com/problems/find-players-with-zero-or-one-losses/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& mat) {
        unordered_map<int,int> m;
        vector<vector<int>> res(2);
        vector<int> v;
        for(auto it:mat){
            for(int  i =0;i<=1;i++){
                if(m.count(it[i])==0){
                    m[it[i]]++;
                    v.push_back(it[i]);
                }
            }
        }
        for(auto it :mat){
            m[it[1]]++;
        }
        for(auto it :v){
            if(m[it] ==1) res[0].push_back(it);
            if(m[it] ==2) res[1].push_back(it);
            
        }
        sort(res[0].begin(),res[0].end());
        sort(res[1].begin(),res[1].end());
        
        return res;
    }
};

int main () {
  
   return 0;
}