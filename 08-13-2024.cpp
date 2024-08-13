// 40. Combination Sum II
// https://leetcode.com/problems/combination-sum-ii/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    void helper(int ind, int t ,vector<int>& v, vector<vector<int>> &ans, vector<int>&ds){
        
        if(t==0){
            ans.push_back(ds);
            return;
        }
        // if(ind==v.size()) return;
        // if(t<v[ind]){
        //     return;
        // }
        
        for(int i = ind;i<v.size();i++){
            if(i>ind&&v[i]==v[i-1]) continue;
            if(t<v[ind]) break;
            ds.push_back(v[i]);
            helper(i+1,t-v[i],v,ans,ds);
            ds.pop_back();

        }
        // helper(ind+1,t,v,ans,ds);
    }
    vector<vector<int>> combinationSum2(vector<int>& v, int target) {
        sort(v.begin(),v.end());
        vector<vector<int>> ans;
        vector<int>ds;
        helper(0,target  , v ,  ans,ds );
        return ans;
    }
};

int main () {
    
     return 0;
}