// 2870. Minimum Number of Operations to Make Array Empty
// https://leetcode.com/problems/minimum-number-of-operations-to-make-array-empty/


#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int> mp;
        int ans = 0;
        for(auto i : nums) mp[i]++;
        
        for(auto &i : mp) {
            if(i.second==1) return -1;
            else if(i.second % 3==0)  ans +=(i.second/3) ;
            else if(i.second % 3==1)  ans+=2+((i.second-4)/3);
            else ans+=1+((i.second-2)/3);
            }
        return ans;
    }
};

int main () {
  
   return 0;
}

