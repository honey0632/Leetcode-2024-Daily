// 2485. Find the Pivot Integer
// https://leetcode.com/problems/find-the-pivot-integer/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int pivotInteger(int n) {
        int sum = (n*(n+1))/2;
        int x=0;

        while(n>0){
            
            if(sum-x-n == x){
                return n;
            }
            x+=n;
            n--;
        }
        return -1;
    }
};

int main () {
    
     return 0;
}

