// 78. Subsets
// https://leetcode.com/problems/subsets/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();                                                 
        vector<vector<int>> powerSet(1 << n);          
        for (int i = 0; i < (1 << n); i++) {             
            for (int j = 0; j < n; j++) {            
                if (i & (1 << j))                     
                    powerSet[i].push_back(nums[j]);   
            }
        }
        
        return powerSet; 
    }
};

int main () {
    
     return 0;
}