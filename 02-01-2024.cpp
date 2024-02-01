// 2966. Divide Array Into Arrays With Max Difference
// https://leetcode.com/problems/divide-array-into-arrays-with-max-difference/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<vector<int>> res(n/3,vector<int>(3));
        int j=0;    

        for (int i = 0; i < n; i += 3) {
            if (i + 2 < n && nums[i + 2] - nums[i] <= k) {
                res[j] = { nums[i], nums[i + 1], nums[i + 2] };
                j++;
            }
            else {
                return vector<vector<int>>();
            }
        }
        return res;

    }
};

int main () {
  
   return 0;
}