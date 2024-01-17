//1207. Unique Number of Occurrences 
// https://leetcode.com/problems/unique-number-of-occurrences/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;
        unordered_set<int> st;

        for(auto it: arr){
            mp[it]++;
        }
        for(auto it: mp){
            if(st.find(it.second)!=st.end()) return 0;
            st.insert(it.second);
        }
        return 1;
    }
};

int main () {
  
   return 0;
}