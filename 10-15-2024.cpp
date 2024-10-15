// 2938. Separate Black and White Balls
// https://leetcode.com/problems/separate-black-and-white-balls/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long minimumSteps(string s) {
        long long n=s.length()-1;
        long long ones =0,ans =0;
        for(long long  i=n;i>=0;i--){
           if(s[i]=='1') {
                ans = ans+n-ones-i;
                ones++;
            }
        }

        return ans;
    }
};

int main () {
    
     return 0;
}