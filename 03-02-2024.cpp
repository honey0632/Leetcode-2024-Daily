// 977. Squares of a Sorted Array
// https://leetcode.com/problems/squares-of-a-sorted-array/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n= nums.size();
        vector<int> res;
        int i=0,j=0;
        for(int k=0;k<n;k++){
            if(nums[k]>=0) {
                j=k;
                i=k-1;
                break;
            }
        }
        if(nums[n-1]<0){
            i=n-1;j=n;
        }
        while(i>=0&&j<n){
            if((-1*nums[i])<nums[j]){
                res.push_back(nums[i]*nums[i]);
                i--;
            }
            else{
                res.push_back(nums[j]*nums[j]);
                j++;
            }
        }
        while(i>=0){
            res.push_back(nums[i]*nums[i]);
            i--;
        }
        while(j<n){
            res.push_back(nums[j]*nums[j]);
            j++;
        }

        return res;
    }
};

int main () {
    
     return 0;
}