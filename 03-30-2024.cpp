// 992. Subarrays with K Different Integers
// https://leetcode.com/problems/subarrays-with-k-different-integers/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    int help(vector<int>& nums, int k){
        int n=nums.size();
        
        unordered_map<int, int> mp;
        
        int i=0, j=0;
        
        int c=0;
        
        while(j<n){
            mp[nums[j]]++;
            
            while(i<=j && mp.size()>k){
                if(--mp[nums[i]] == 0) mp.erase(nums[i]);
                i++;
            }
            
            c += (j-i+1);
            
            j++;
        }
        
        return c;
    }
    
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return help(nums,k)-help(nums,k-1);
    }
};

int main () {
    
     return 0;
}