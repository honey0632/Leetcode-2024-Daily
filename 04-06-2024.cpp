// 1249. Minimum Remove to Make Valid Parentheses
// https://leetcode.com/problems/minimum-remove-to-make-valid-parentheses/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> stack;

        for (int i = 0; i < s.length(); ++i)
            if (s[i] == '(') {
                stack.push(i);
            } else if (s[i] == ')') {
                if (stack.empty())
                    s[i] = '*';
                else
                    stack.pop();
            }

        while (!stack.empty())
            s[stack.top()] = '*', stack.pop();

        s.erase(remove(s.begin(), s.end(), '*'), s.end());
        return s;
    }
};

int main () {
    
     return 0;
}