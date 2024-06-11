// 1122. Relative Sort Array
// https://leetcode.com/problems/relative-sort-array/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int, int> m;
        for (auto i : arr1) m[i]++;
        int pos = 0;
        for (auto j : arr2) {
            while(m[j]-- > 0) arr1[pos++] = j;
        }
        for (auto it : m) {
            while(it.second-- > 0) arr1[pos++] = it.first;
        }
        return arr1;  
    }
};

int main () {
    
     return 0;
}