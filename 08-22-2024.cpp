// 476. Number Complement
// https://leetcode.com/problems/number-complement/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findComplement(int num) {
        if (num == 0) return 1;
        
        unsigned int mask = ~0;
        
        while (num & mask) {
            mask <<= 1;
        }
        
        return ~mask & ~num;
    }
};

int main () {
    
     return 0;
}

