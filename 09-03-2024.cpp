// 1945. Sum of Digits of String After Convert
// https://leetcode.com/problems/sum-of-digits-of-string-after-convert/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int getLucky(string s, int k) {
        string number = "";
        for (char x : s) {
            number += to_string(x - 'a' + 1);
        }
        
        while (k > 0) {
            int temp = 0;
            for (char x : number) {
                temp += x - '0';  
                }
            number = to_string(temp);  
            k--;
        }
        return stoi(number);
    }
};

int main () {
    
     return 0;
}