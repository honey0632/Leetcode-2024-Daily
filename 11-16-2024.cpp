// 3254. Find the Power of K-Size Subarrays I
// https://leetcode.com/problems/find-the-power-of-k-size-subarrays-i/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int count = 0;
        int max = nums[0];
        vector<int> res;

        for (int i = 0; i < k - 1; i++) {
            if (nums[i] == nums[i + 1] - 1) {
                max++;
            } else {
                count = i + 1;
                max = nums[i + 1];
            }
        }

        if (count > 0) {
            res.push_back(-1);
        } else {
            res.push_back(max);
        }

        for (int i = k; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1] + 1) {
                max++;
                count--;
            } else {
                count = k - 1;
                max = nums[i];
            }

            if (count > 0) {
                res.push_back(-1);
            } else {
                res.push_back(max);
            }
        }

        return res;
    }
};

int main() {
    
     return 0;
}