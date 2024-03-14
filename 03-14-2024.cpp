// 930. Binary Subarrays With Sum
// https://leetcode.com/problems/binary-subarrays-with-sum/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atMost(nums, goal) - atMost(nums, goal-1);
    }
    int atMost(vector<int>& nums, int goal){
        int i, j = 0, sum = 0, result = 0;
        for (i = 0; i < nums.size(); i++) {
            sum += nums[i];
            while (sum > goal && j <= i) {
                sum -= nums[j];
                j++;
            }
            result += i - j + 1;
        }
        return result;
    }
};

int main () {
    
     return 0;
}