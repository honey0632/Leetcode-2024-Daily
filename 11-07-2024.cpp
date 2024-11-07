// 2275. Largest Combination With Bitwise AND Greater Than Zero
// https://leetcode.com/problems/largest-combination-with-bitwise-and-greater-than-zero/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        int maxi = 0;
        for(int i=0;i<32;i++){
            int cnt =0;

            for(int it: candidates){
                if(it&(1<<i)) cnt++;
            }
            maxi = max(maxi,cnt);
        }
        return maxi;
    }
};

int main() {

     return 0;
}