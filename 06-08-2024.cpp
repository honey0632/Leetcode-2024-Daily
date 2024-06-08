// 523. Continuous Subarray Sum
// https://leetcode.com/problems/continuous-subarray-sum/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) 
    {
        map<int,int>mp;
        mp[0] = -1;
        int sum = 0, n = nums.size(), mod;
        for(int i=0;i<n;i++)
        {
            sum += nums[i];
            mod = sum % k;
            if(mp.find(mod) == mp.end()) mp[mod] = i;
            else if((i - mp[mod]) > 1) return true;
        }
        return false;
    }
};

int main () {
    
     return 0;
}