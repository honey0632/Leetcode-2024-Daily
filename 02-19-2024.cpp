// 231. Power of Two
// https://leetcode.com/problems/power-of-two/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return 0;
        else return !(n&(n-1)); 
    }
};

int main () {
    
     return 0;
}