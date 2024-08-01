// 2678. Number of Senior Citizens
// https://leetcode.com/problems/number-of-senior-citizens/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countSeniors(vector<string>& details) {
        
        int ans=0;
        for(auto it: details){
            if(stoi(it.substr(11,2))>60) ans++;
        }
        return ans;
    }
};

int main () {
    
     return 0;
}