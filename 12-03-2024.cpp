// 2109. Adding Spaces to a String
// https://leetcode.com/problems/adding-spaces-to-a-string/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int len = s.size() + spaces.size();        // Total length of the result
        string res(len, ' ');                      // Pre-allocate result string
        int skip = 0, it = 0;                      // Initialize pointers

        for (int i = 0; i < s.size(); i++) {
            if (it < spaces.size() && i == spaces[it]) { // Insert space if index matches
                it++;
                skip++;
            }
            res[i + skip] = s[i];                  // Place character in result
        }

        return res;
    }
};

int main() {
    
     return 0;
}