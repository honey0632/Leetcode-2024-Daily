// 2053. Kth Distinct String in an Array
// https://leetcode.com/problems/kth-distinct-string-in-an-array/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        int distinctCount = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (isDistinct(arr, i)) {
                distinctCount++;
                if (distinctCount == k) {
                    return arr[i];
                }
            }
        }
        return "";
    }

private:
    bool isDistinct(vector<string>& arr, int index) {
        return count(arr.begin(), arr.end(), arr[index]) == 1;
    }
};


int main () {
    
     return 0;
}