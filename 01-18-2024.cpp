// 70. Climbing Stairs
// https://leetcode.com/problems/climbing-stairs/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        int a=1,b=2;
        if(n==1)return 1;
        while(n>2){
            int c =a+b;
            a=b;
            b=c;
            n--;
        }
        return b;
    }
};

int main () {
  
   return 0;
}