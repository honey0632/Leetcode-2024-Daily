// 1460. Make Two Arrays Equal by Reversing Subarrays
// https://leetcode.com/problems/make-two-arrays-equal-by-reversing-subarrays/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        map<int,int> mp;

        for(auto it: target){
            mp[it]++;
        }
        for(auto it: arr){
            mp[it]--;
            if(mp[it]<0) return 0;
        }
        return 1;
    }
};

int main () {
    
     return 0;
}