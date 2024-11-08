// 1829. Maximum XOR for Each Query
// https://leetcode.com/problems/maximum-xor-for-each-query/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        const unsigned mask=(1<<maximumBit)-1,  n=nums.size();
        vector<int> ans(n, 0);
        ans[n-1]=nums[0]^mask;
        for(int i=1; i<n; i++)
            ans[n-1-i]^=(ans[n-i]^nums[i]);
        return ans;
    }
};

int main() {
    
     return 0;
}