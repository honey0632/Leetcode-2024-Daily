// 1014. Best Sightseeing Pair
// https://leetcode.com/problems/best-sightseeing-pair/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        const int n=values.size();
        if (n==2) return values[0]+values[1]-1;
        int dp=values[0], score=0;
        for(int i=1; i<n; i++){
            int x=values[i];
            score=max(score, dp+x-i);
            dp=max(dp, x+i);
        }
        return score;
    }
};

int main() {
    
     return 0;
}