// 1508. Range Sum of Sorted Subarray Sums
// https://leetcode.com/problems/range-sum-of-sorted-subarray-sums/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> sa;
        for(int i=0;i<n;i++){
            int sum =0;
            for(int j=i;j<n;j++){
                sum+=nums[j];
                sa.push_back(sum);
            }
        }
        sort(sa.begin(),sa.end());
        long int ans=0;
        for(int i=left-1;i<right;i++){
            ans = (ans+sa[i])%(1000000007);
        }
        return ans;
    }
};

int main () {
    
     return 0;
}
