// 169. Majority Element
// https://leetcode.com/problems/majority-element/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int cnt= 0,elem = 0;
        for(auto it: nums){
            if(cnt==0) elem=it;
            
            if (it ==elem) cnt++;
            else           cnt--;
        }
        return elem;
    }
};

int main () {
  
   return 0;
}