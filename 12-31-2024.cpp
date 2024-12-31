// 983. Minimum Cost For Tickets
// https://leetcode.com/problems/minimum-cost-for-tickets/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    int f(int ind ,vector<int>& days, vector<int>& costs ,vector<int>&dp){
        int n=days.size();
        if(ind>=n) return 0;
        
        if(dp[ind]!=-1) return dp[ind];
        int x = costs[0]+f(ind+1,days,costs,dp);
        int temp = ind;
        while(ind<n && days[ind]<days[temp]+7) ind++;
        int y = costs[1]+f(ind,days,costs,dp);
        
        while(ind<n && days[ind]<days[temp]+30) ind++;
        int z = costs[2]+f(ind,days , costs,dp);
        return dp[temp] = min(x,min(y,z));
    }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        vector<int> dp(days.size()+1,-1);
        return f(0,days,costs,dp);
    }
};

int main() {
    
     return 0;
}