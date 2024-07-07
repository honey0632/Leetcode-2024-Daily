// 1518. Water Bottles
// https://leetcode.com/problems/water-bottles/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int totalBottles = numBottles;

        while (numBottles >= numExchange) {
            totalBottles += numBottles / numExchange;
            numBottles = (numBottles / numExchange) + (numBottles % numExchange);
        }

        return totalBottles;
    }
};

int main () {
    
     return 0;
}