#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int, int> mp;
        vector<vector<int>> res;
        for (auto i:nums)
        {
            mp[i]++;
            if(res.size()<mp[i]) res.push_back(vector<int>());
            res[mp[i]-1].push_back(i);
          
        }
        return res;
    }
};
int main () {
  
   return 0;
}