// 2997. Minimum Number of Operations to Make Array XOR Equal to K
// https://leetcode.com/problems/minimum-number-of-operations-to-make-array-xor-equal-to-k/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int res =  k;

        for(auto it: nums){
            res = res^ it;
        }
        return __builtin_popcount(res);
    }
};

int main () {
    
     return 0;
}