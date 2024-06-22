// 1248. Count Number of Nice Subarrays
// https://leetcode.com/problems/count-number-of-nice-subarrays/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        for(int i = 0; i < nums.size(); i++) {
            nums[i] %= 2;
        }
        
        vector<int> prefix(nums.size() + 1);
        prefix[0] = 1;
        int s = 0, ans = 0;
        for(int i = 0; i < nums.size(); i++) {
            s += nums[i];
            if(s>=k){
                ans+= prefix[s-k];
            }
            prefix[s]++;
        }
        return ans;
    }
};

int main () {
    
     return 0;
}