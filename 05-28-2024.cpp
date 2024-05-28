// 1208. Get Equal Substrings Within Budget
// https://leetcode.com/problems/get-equal-substrings-within-budget/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int equalSubstring(string s, string t, int k) {
        int n= s.length();

        vector<int> pref(n,0);
        for(int i=0;i<n;i++){
            pref[i] = abs(s[i]-t[i]);
        }

        int i=0 , j=0,ans =0,sum =0;

        while(j<n){
            sum += pref[j++];

            if(sum>k){
                while(sum>k &&i<j){
                    sum -= pref[i++];
                }
            } 
            else{
                ans = max(ans,j-i);
            }
        }

        return ans;
    }
};

int main () {
    
     return 0;
}