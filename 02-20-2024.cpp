// 268. Missing Number
// https://leetcode.com/problems/missing-number/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans = ans^(i+1)^nums[i];
        }
        return ans;
    }
};

int main () {
    
     return 0;
}