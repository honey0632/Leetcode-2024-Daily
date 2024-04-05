// 1614. Maximum Nesting Depth of the Parentheses
// https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxDepth(string s) {
        int count = 0;
        int max_num = 0;
        for (char c : s) {
            if (c == '(') {
                count++;
                if (max_num < count)
                    max_num = count;
            } else if (c == ')') {
                count--;
            }
        }
        return max_num;
    }
};

int main () {
    
     return 0;
}