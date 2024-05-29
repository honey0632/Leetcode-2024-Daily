// 1404. Number of Steps to Reduce a Number in Binary Representation to One
// https://leetcode.com/problems/number-of-steps-to-reduce-a-number-in-binary-representation-to-one/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numSteps(string s) {
        int ext = 0, steps = 0;
        for(int i = s.length() - 1; i > 0; i--) {
            if((s[i] - '0') + ext == 1) {
                steps += 2;
                ext = 1;
            } else {
                steps++;
            }
        }
        return steps + ext;
    }
};

int main () {
    
     return 0;
}