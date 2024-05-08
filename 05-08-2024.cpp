// 506. Relative Ranks
// https://leetcode.com/problems/relative-ranks/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool static comp(pair<int,int> &a,pair<int,int>& b){
        return a.first>=b.first;
    }
    vector<string> findRelativeRanks(vector<int>& score) {
        
        int n = score.size();
        vector<string> res(n,"");
        vector<pair<int,int>> v;
        for(int i =0;i<n;i++){
            v.push_back({score[i],i});
        }
        sort(v.begin(),v.end(),comp);
        for(int i =0;i<n;i++){
            if(i==0) res[v[i].second]= "Gold Medal";
            else if(i==1) res[v[i].second]= "Silver Medal";            
            else if(i==2) res[v[i].second]= "Bronze Medal";
            else res[v[i].second]=to_string(i+1);

        }
        return res;
    }
};

int main () {
    
     return 0;
}