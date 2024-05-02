// 2441. Largest Positive Integer That Exists With Its Negative
// https://leetcode.com/problems/largest-positive-integer-that-exists-with-its-negative/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int left = 0, right = nums.size() - 1;
        int maxK = INT_MIN;
        while (left < right) {
            int sum = nums[left] + nums[right];
            if (sum == 0) {
                maxK = max(maxK, nums[right]);
                left++;
                right--;
            } else if (sum < 0) {
                left++;
            } else {
                right--;
            }
        }
        return maxK != INT_MIN ? maxK : -1;  // If no such pair found
    }
};

int main () {
    
     return 0;
}