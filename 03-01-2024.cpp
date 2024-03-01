// 2864. Maximum Odd Binary Number
// https://leetcode.com/problems/maximum-odd-binary-number/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n= s.length();
        int count =0;
        for(int i=0;i<n;i++){
            if(s[i]=='1') count++;
            s[i]='0';
        }
        s[n-1]='1';
        count--;
        while(count--){
            s[count]='1';
        }
        return s;
    }
};

int main () {
    
     return 0;
}