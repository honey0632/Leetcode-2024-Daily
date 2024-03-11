// 791. Custom Sort String
// https://leetcode.com/problems/custom-sort-string/ 

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char, int> charCount;
        for (char c : order) {
            charCount[c] = 0;
        }
        
        for (char c : s) {
            if (charCount.find(c) != charCount.end()) {
                charCount[c]++;
            }
        }
        
        string ss;
        for (char c : order) {
            ss.append(charCount[c], c);
        }
        
        for (char c : s) {
            if (charCount.find(c) == charCount.end()) {
                ss.push_back(c);
            }
        }
        
        return ss;
    }
};

int main () {
    
     return 0;
}