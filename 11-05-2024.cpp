// 2914. Minimum Number of Changes to Make Binary String Beautiful
// https://leetcode.com/problems/minimum-number-of-changes-to-make-binary-string-beautiful/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minChanges(string& s) {
        const int n=s.size();
        int cnt=0;
        for(int i=0; i<n; i+=2)
            cnt+=(s[i]!=s[i+1]);
        return cnt;
    }
};

int main() {
    
     return 0;
}