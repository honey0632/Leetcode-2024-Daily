// 58. Length of Last Word
// https://leetcode.com/problems/length-of-last-word/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string& s) {
        int l, r;
        for (r=s.size()-1; r>=0; r--)
            if (s[r]!=' ') break;
        l=r;
        for (;l>=0;l--)
            if (s[l]==' ') break;
        return r-l;
    }
};

int main () {
    
     return 0;
}