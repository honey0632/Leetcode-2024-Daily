// 1750. Minimum Length of String After Deleting Similar Ends
// https://leetcode.com/problems/minimum-length-of-string-after-deleting-similar-ends/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumLength(string s) {
        int left = 0;
        int right = s.size() - 1;

        while (left < right && s[left] == s[right]) {
            char ch = s[left];
            while (left <= right && s[left] == ch) {
                left++;
            }
            while (right >= left && s[right] == ch) {
                right--;
            }
        }

        return right - left + 1;
    }
};

int main () {
    
     return 0;
}