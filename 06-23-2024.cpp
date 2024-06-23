// 1438. Longest Continuous Subarray With Absolute Diff Less Than or Equal to Limit
// https://leetcode.com/problems/longest-continuous-subarray-with-absolute-diff-less-than-or-equal-to-limit/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        priority_queue<pair<int, int>> maxpq; // max-heap for maximum values
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minpq; // min-heap for minimum values

        int n = nums.size();
        int i = 0, j = 0, maxlen = 0;

        while (j < n) {
            // Add the current element to both heaps
            maxpq.push({nums[j], j});
            minpq.push({nums[j], j});

            // Check the condition
            if (maxpq.top().first - minpq.top().first <= limit) {
                maxlen = max(maxlen, j - i + 1);
            } else {
                // Shrink the window from the left
                while (maxpq.top().first - minpq.top().first > limit) {
                    i++;
                    // Remove elements from the heaps that are outside the current window
                    while (!maxpq.empty() && maxpq.top().second < i) {
                        maxpq.pop();
                    }
                    while (!minpq.empty() && minpq.top().second < i) {
                        minpq.pop();
                    }
                }
            }
            j++;
        }

        return maxlen;
    }
};
int main () {
    
     return 0;
}