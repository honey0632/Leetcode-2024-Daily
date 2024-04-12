// 42. Trapping Rain Water
// https://leetcode.com/problems/trapping-rain-water/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int trap(vector<int>& a) {
        int r = a.size()-1,l = 0 , leftmax = 0 , rightmax = 0;
        int ans = 0;
        while(l<r){
            if(a[l]<=a[r]){
                if(a[l]>= leftmax) leftmax = a[l];
                else ans += leftmax - a[l];
                l++;
            }
            else{
                if(a[r]>= rightmax) rightmax = a[r];
                else ans += rightmax - a[r];
                r--;
            }
        }
        return ans;
    }
};

int main () {
    
     return 0;
}