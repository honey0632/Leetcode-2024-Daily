// 2044. Count Number of Maximum Bitwise-OR Subsets
// https://leetcode.com/problems/count-number-of-maximum-bitwise-or-subsets/

#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    void backtrack(const vector<int> &nums, int index, int currentOR, int maxOR, int &count){
        if (currentOR == maxOR){
            count++;
        }

        for (int i = index; i < nums.size(); ++i){
            backtrack(nums, i + 1, currentOR | nums[i], maxOR, count);
        }
    }

    int countMaxOrSubsets(vector<int> &nums){
        int maxOR = 0;
        for (int num : nums){
            maxOR |= num;
        }

        int count = 0;
        //  Backtrack to count the subsets
        backtrack(nums, 0, 0, maxOR, count);

        return count;
    }
};

int main () {
    
     return 0;
}