// 2108. Find First Palindromic String in the Array
// https://leetcode.com/problems/find-first-palindromic-string-in-the-array/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s){
        int i=0, j = s.length()-1;
        while(i<j){
            if(s[i++]!=s[j--]) return 0;
        }
        return 1;
    }
    string firstPalindrome(vector<string>& words) {
        for(auto it:words){
            if(isPalindrome(it)) return it;
        }
        return "";
    }
};

int main () {
  
   return 0;
}