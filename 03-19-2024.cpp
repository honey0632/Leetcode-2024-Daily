// 342. Power of Four
// https://leetcode.com/problems/power-of-four/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0)return false;

        // float a= log(n) / log(4);

        if(ceil(log(n) / log(4))==floor(log(n) / log(4)))
            return true;    
        return false;
    }
};

int main () {
    
     return 0;
}