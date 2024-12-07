// 1760. Minimum Limit of Balls in a Bag
// https://leetcode.com/problems/minimum-limit-of-balls-in-a-bag/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool check(int mid, vector<int> &nums, int maxOperations) {
        int n = nums.size(); 
        for (auto &num: nums) {
            maxOperations -= (num + mid - 1) / mid - 1;
        }
        return maxOperations >= 0; 
    }

    int minimumSize(vector<int>& nums, int maxOperations) {
        int n = nums.size(); 
        int l = 1, r = 1e9; 
        int ans = 1e9; 
        while (l <= r) {
            int mid = l + (r - l) / 2; 
            if (check(mid, nums, maxOperations)) {
                ans = mid; 
                r = mid - 1; 
            } else {
                l = mid + 1; 
            }
        }
        return ans; 
    }
};

int main() {
    
     return 0;
}