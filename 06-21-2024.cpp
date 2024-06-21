// 1052. Grumpy Bookstore Owner
// https://leetcode.com/problems/grumpy-bookstore-owner/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n = customers.size(), satisfied = 0;

        for (int i = 0; i < n; i++) 
            if (!grumpy[i]) satisfied += customers[i];

        int maxGain = 0, currentGain = 0;
        for (int i = 0; i < minutes; i++) 
            if (grumpy[i]) currentGain += customers[i];
        maxGain = currentGain;

        for (int i = minutes; i < n; i++) 
        {
            if (grumpy[i]) currentGain += customers[i];
            if (grumpy[i - minutes]) currentGain -= customers[i - minutes];
            maxGain = max(maxGain, currentGain);
        }

        return satisfied + maxGain;
    }
};

int main () {
    
     return 0;
}