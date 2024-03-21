// 452. Minimum Number of Arrows to Burst Balloons
// https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/

#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& a) {
        int n=a.size(),ans=0;
        sort(a.begin(),a.end());
        int i=0,j=0;
        while(i<n && j<n){
            if(i==j){
                ans++;
                j++;
            }
            else if(a[i][1]<a[j][0]){
                i++;
            }
            else if(a[i][1]>=a[j][0]){
                a[j][1]=min(a[i][1],a[j][1]);
                i=j;
                j++;
                
            }
        }
        return ans;
    }
};
int main () {
    
     return 0;
}