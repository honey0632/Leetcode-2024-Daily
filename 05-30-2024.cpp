// 1442. Count Triplets That Can Form Two Arrays of Equal XOR
// https://leetcode.com/problems/count-triplets-that-can-form-two-arrays-of-equal-xor/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int count = 0;
        
        for (int i = 0; i < arr.size(); i++) {
            int val = arr[i];
            
            for (int k = i + 1; k < arr.size(); k++) {
                val ^= arr[k];
                
                if (val == 0) {
                    count += (k - i);
                }
            }
        }
        
        return count;
    }
};

int main () {
    
     return 0;
}