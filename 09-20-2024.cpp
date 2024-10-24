// 214. Shortest Palindrome
// https://leetcode.com/problems/shortest-palindrome/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string shortestPalindrome(string s) {
        int n = s.size();
        
        int i = 0;
        int j = n - 1;
        
        while (j >= 0) {
            if (s[i] == s[j]) {
                i++;
            }
            j--;
        }
        
        string remain = s.substr(i); 
        
        if( remain.size()==0 ){ return s; }

        string rev_remain = remain;
        reverse(rev_remain.begin(), rev_remain.end());
        
        return rev_remain + shortestPalindrome(s.substr(0, i)) + remain;
    }
};

int main () {
    
     return 0;
}