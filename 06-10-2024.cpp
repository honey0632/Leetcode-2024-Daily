// 1051. Height Checker
// https://leetcode.com/problems/height-checker/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int freq[101]={0};
        for(int x: heights) freq[x]++;
        int cnt=0, ans=0;
        for (int x=1; x<=100; x++){
            int f=freq[x];
            for(int i=cnt; i<cnt+f; i++)
                ans+=heights[i]!=x;
            cnt+=f;
        }
        return ans;
    }
};

int main () {
    
     return 0;
}