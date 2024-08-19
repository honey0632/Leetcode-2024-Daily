// 650. 2 Keys Keyboard
// https://leetcode.com/problems/2-keys-keyboard/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int helper(int i, int n, int copied){
        if(i==n){
            return 1;
        }
        if(i > n){
            return 1e9;
        }
        int d = 2+helper(2*i,n,i);
        int add = 1+helper(i+copied,n,copied);
        return min(d,add);
    }
    
    int minSteps(int n) {
       if(n==1){
           return 0;
       } 
        return helper(1,n,1);
    }
};

int main () {
    
     return 0;
}