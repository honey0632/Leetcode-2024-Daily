// 995. Minimum Number of K Consecutive Bit Flips
// https://leetcode.com/problems/minimum-number-of-k-consecutive-bit-flips/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        int ans = 0, flips = 0;
        for(int i = 0; i < nums.size(); i++) {
            if((nums[i] + flips) % 2 == 0) {
                if(i > nums.size() - k) {
                    return -1;
                } else {
                    ans++;
                    flips++;
                    nums[i] = -1;
                }
            }
            if(i + 1 >= k) {
                flips -= (nums[i - k + 1] < 0);     
            }
        }
        return ans;
    }
};

int main () {
    
     return 0;
}