// 387. First Unique Character in a String
// https://leetcode.com/problems/first-unique-character-in-a-string/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> oc(26);
        for (auto i : s) oc[i - 'a']++;
        for (int i = 0; i < s.size(); i++) {
            if (oc[s[i] - 'a'] == 1) return i;
        }

        return -1;
    }
};

int main () {
  
   return 0;
}