// Product array puzzle
// https://www.geeksforgeeks.org/problems/product-array-puzzle4525/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums) {

        // code here
        long long int product=1;
        bool found_zero=false;
        int cnt_zero=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                product=product*nums[i];
            }else{
                 cnt_zero++;
            }
        }
        vector<long long int>ans;
        if(cnt_zero==1){
            for(int i=0;i<nums.size();i++){
                if(nums[i]==0){
                ans.push_back(product);
                 }else ans.push_back(0);
            }
        }else if(cnt_zero>1){
            for(int i=0;i<nums.size();i++){
                ans.push_back(0);
            }
        }else{
            for(int i=0;i<nums.size();i++){
                ans.push_back(product/nums[i]);
            }
        }
        return ans;
    }
};

int main () {
    
     return 0;
}