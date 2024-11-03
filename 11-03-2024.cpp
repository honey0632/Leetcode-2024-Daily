// 796. Rotate String
// https://leetcode.com/problems/rotate-string/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool rotateString(string s, string goal) {
        return s.size()==goal.size() && (s+s).find(goal)!=-1;
    }
};

int main() {
    
     return 0;
}