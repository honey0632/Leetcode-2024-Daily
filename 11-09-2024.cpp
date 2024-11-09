// 3133. Minimum Array End
// https://leetcode.com/problems/minimum-array-end/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long minEnd(int n, int x) {
        long result = x;
        long remaining = n - 1;
        long position = 1;
        
        while (remaining) {
            if (!(x & position)) {
                result |= (remaining & 1) * position;
                remaining >>= 1;
            }
            position <<= 1;
        }
        
        return result;
    }
};

int main() {
    
     return 0;
}