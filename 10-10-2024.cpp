// 962. Maximum Width Ramp
// https://leetcode.com/problems/maximum-width-ramp/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        stack<int> st;
        int n = nums.size();

        for(int  i= 0;i<n;i++){
            if(st.empty())st.push(i);
            else if(nums[i]<nums[st.top()]) st.push(i);
        }
        int ans = 0;
        for(int j=n-1;j>=0;j--){
            while (!st.empty() && nums[st.top()] <= nums[j]) {
                ans = max(ans, j - st.top());
                st.pop();
            }
        }

        return ans;
    }
};

int main () {
    
     return 0;
}