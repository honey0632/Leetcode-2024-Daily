// 1545. Find Kth Bit in Nth Binary String
// https://leetcode.com/problems/find-kth-bit-in-nth-binary-string/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    char findKthBit(int n, int k) {
        if (k==1) return '0';// base case
        int sz=32-__builtin_clz(k);
        int k0=(1<<sz)-k; // reflected number
        if (k0==k) return '1';// k is a symmetry number
    //    cout<<(1<<sz)<<", k="<<k<<endl;
        return (findKthBit(n, k0)=='0')?'1':'0';
    }
};

int main () {
    
     return 0;
}