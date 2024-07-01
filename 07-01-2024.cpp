// 1550. Three Consecutive Odds
// https://leetcode.com/problems/three-consecutive-odds/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int cnt = 0;
        int n = arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]%2) cnt++;
            else cnt =0;
            if(cnt==3) return 1;
        }
        return 0;
    }
};

int main () {
    
     return 0;
}