// 2962. Count Subarrays Where Max Element Appears at Least K Times
// https://leetcode.com/problems/count-subarrays-where-max-element-appears-at-least-k-times/

#include <bits/stdc++.h>
using namespace std;

class Solution
{

public:
    long long countSubarrays(vector<int> &nums, int k)
    {

        int mx = *max_element(begin(nums), end(nums));

        long long ans = 0;

        int l = 0, r = 0, n = nums.size();

        while (r < n)
        {

            k -= (nums[r++] == mx);

            while (k == 0)
            {

                k += (nums[l++] == mx);
            }

            ans += l;
        }

        return ans;
    }
};

int main()
{

    return 0;
}