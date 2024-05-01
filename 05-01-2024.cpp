// 2000. Reverse Prefix of Word
// https://leetcode.com/problems/reverse-prefix-of-word/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reversePrefix(string word, char ch) {
        int j = word.find(ch);
        if (j != -1) {
            reverse(word.begin(), word.begin() + j + 1);
        }
        return word;
    }
};

int main () {
    
     return 0;
}