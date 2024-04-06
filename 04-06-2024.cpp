// 1544. Make The String Great
// https://leetcode.com/problems/make-the-string-great/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string makeGood(string s) {
        stack<char> stack;
        
        for (char c : s) {
            if (!stack.empty() && abs(c - stack.top()) == 32) {
                stack.pop();
            } else {
                stack.push(c);
            }
        }
        
        string result;
        while (!stack.empty()) {
            result = stack.top() + result;
            stack.pop();
        }
        
        return result;
    }
};

int main () {
    
     return 0;
}