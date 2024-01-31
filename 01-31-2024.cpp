// 739. Daily Temperatures
// https://leetcode.com/problems/daily-temperatures/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
     vector<int> dailyTemperatures(vector<int>& t) {
        stack<pair<int,int>> s; //First is the number while second is the position
        
        int n= t.size();
        vector<int> res(n,0);
        
        for(int i=n-1;i>=0;i--)
        {
            int curr = t[i];
            while(!s.empty() && s.top().first <= curr) s.pop();
            
            res[i] = s.empty() ? 0 : s.top().second - i;

            s.push({curr,i});
        }
        
        return res;
    }
};

int main () {
  
   return 0;
}