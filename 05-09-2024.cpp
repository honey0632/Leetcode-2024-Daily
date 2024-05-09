// 3075. Maximize Happiness of Selected Children
// https://leetcode.com/problems/maximize-happiness-of-selected-children/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maximumHappinessSum(vector<int>& h, int k) {
        sort(h.begin(),h.end(),greater<int>());
        long long ans = 0;
        int i=0;
        while(k--){
            if((h[i]-i)<0) return ans;
            else ans += h[i]-i;

            i++;
        }

        return ans;
    }
};

int main () {
    
     return 0;
}
