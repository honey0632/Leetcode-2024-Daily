// 
// 

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int appendCharacters(string s, string t) {
        int i = 0, j = 0;
        int n = s.length(), m = t.length();
    
        while (i < n && j < m) {
            if (s[i] == t[j]) {
                j++;
            }
            i++;
        }
    
        return m - j;
    }
};

int main () {
    
     return 0;
}