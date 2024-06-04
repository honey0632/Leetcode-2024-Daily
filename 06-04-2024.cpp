// 409. Longest Palindrome
// https://leetcode.com/problems/longest-palindrome/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestPalindrome(string s) {
        int odd = 0;
        unordered_map<char, int> charFrequency;
        for (char ch : s) {
            charFrequency[ch]++;
            if (charFrequency[ch] % 2 == 1)
                odd++;
            else
                odd--;
        }
        if (odd > 1)
            return s.length() - odd + 1;
        return s.length();
    }
};

int main () {
    
     return 0;
}