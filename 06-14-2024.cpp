// 945. Minimum Increment to Make Array Unique
// https://leetcode.com/problems/minimum-increment-to-make-array-unique/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ans = 0;
        int nxt = nums[0] + 1;
        for(int i = 1; i < nums.size(); i++) {
            if(nxt >= nums[i]) {
                ans += (nxt++ - nums[i]);
            } else {
                nxt = nums[i] + 1;
            }
        }
        return ans;
    }
};

int main () {
    
     return 0;
}