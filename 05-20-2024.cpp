// 1863. Sum of All Subset XOR Totals
// https://leetcode.com/problems/sum-of-all-subset-xor-totals/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
            for (int i = 0; i < (1 << n); i++) {
            int temp = 0;
            for (int j = 0; j < n; j++) {

                if (i & (1 << j)) {
                    temp ^= nums[j];
                }
            }
            ans += temp;
        }
        return ans;
    }
};

int main () {
    
     return 0;
}