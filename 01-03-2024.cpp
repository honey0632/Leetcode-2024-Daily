// 2125. Number of Laser Beams in a Bank
// https://leetcode.com/problems/number-of-laser-beams-in-a-bank/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n = bank.size();
        // bool flag = false;
        int ans= 0,pre = 0,cnt=0;
        for(int i = 0;i<n;i++){
            if(!pre){
                for(auto j: bank[i]){
                    pre+= j-'0';
                }
            }
            else {
                for(auto j: bank[i]){
                    cnt+= j-'0';
                }
                if(cnt){
                    ans+= cnt*pre;
                    pre=cnt;
                    cnt=0;
                }
            }
        }
        return ans;
    }
};



int main () {
  
   return 0;
}