// 330. Patching Array
// https://leetcode.com/problems/patching-array/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        
        sort(nums.begin(),nums.end());
        long long miss = 1;
        int result = 0;
        int i = 0;

        while (miss <= n) {
            if (i < nums.size() && nums[i] <= miss) {
                miss += nums[i];
                i++;
            } else {
                miss += miss;
                result++;
            }
        }
        return result;
    }
};
int main () {
    
     return 0;
}
