// 2696. Minimum String Length After Removing Substrings
// https://leetcode.com/problems/minimum-string-length-after-removing-substrings/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minLength(string s) {
        int n=s.size();
        if (n<2) return n;
        string t=string(1, s[0]);
        for(int i=1; i<n; i++){
            if (!t.empty() &&((t.back()=='A' && s[i]=='B') ||
                (t.back()=='C' && s[i]=='D'))) t.pop_back();
            else t.push_back(s[i]);
        }  
        return t.size(); 
    }
};

int main () {
    
     return 0;
}